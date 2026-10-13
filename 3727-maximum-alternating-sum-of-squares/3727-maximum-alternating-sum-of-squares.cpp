
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs(a) < abs(b);
        });
        long long fhalf=0;
        long long shalf=0;
        for (int i = 0; i < n; i++) {
            if (i<n/2)
                fhalf += 1LL * nums[i] * nums[i];
            else
                shalf += 1LL * nums[i] * nums[i];
        }

        return shalf - fhalf;
    }
};
