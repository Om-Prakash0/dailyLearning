class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>> ans;

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum < 0)
                    left++;
                else if (sum > 0)
                    right--;
                else {
                    vector<int> temp = {nums[i], nums[left], nums[right]};
                    ans.insert(temp);
                    left++;
                    right--;
                }
            }
        }

        vector<vector<int>> arr;
        for (auto a : ans) {
            arr.push_back(a);
        }

        return arr;
    }
};