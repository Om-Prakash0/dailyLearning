class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre = 1, sup = 1;
        int n = nums.size();
        int ans = nums[0];

        for (int i = 0; i < n; i++) {
            if (sup == 0) sup = 1;
            if (pre == 0) pre = 1;

            pre *= nums[i];
            sup *= nums[n - i - 1];

            ans = max({ans, pre, sup});
        }
        return ans;
    }
};