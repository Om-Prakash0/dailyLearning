class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr = nums;
        sort(arr.begin(),arr.end());
        vector<int> brr = nums;

        if (brr == arr) return true;

        for (int x = 1; x < n; x++) {
            for (int i = 0; i < n; i++) {
                brr[i] = arr[(i + x) % n];
            }

            if (brr == nums) return true;
        }

        return false;
    }
};