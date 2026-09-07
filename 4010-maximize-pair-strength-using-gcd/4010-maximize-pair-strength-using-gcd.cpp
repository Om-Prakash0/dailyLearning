class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans = LLONG_MIN;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                ans = max(
                    (1LL * nums[i] * nums[j]) /
                    (1LL * gcd(nums[i], nums[j]) * gcd(nums[i], nums[j])),
                    ans
                );
            }
        }

        return ans;
    }
};