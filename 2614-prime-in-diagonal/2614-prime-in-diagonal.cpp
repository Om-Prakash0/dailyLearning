class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        vector<int> arr;
        int n = nums.size();
        int m = nums[0].size();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i == j || i + j == m - 1) {
                    arr.push_back(nums[i][j]);
                }
            }
        }

        vector<int> brr;

        for(int i = 0; i < arr.size(); i++) {
            bool flag = true;

            if(arr[i] < 2)
                flag = false;

            for(int j = 2; j * j <= arr[i] && flag; j++) {
                if(arr[i] % j == 0)
                    flag = false;
            }

            if(flag)
                brr.push_back(arr[i]);
        }

        if(brr.empty())
            return 0;

        sort(brr.begin(), brr.end());
        return brr.back();
    }
};