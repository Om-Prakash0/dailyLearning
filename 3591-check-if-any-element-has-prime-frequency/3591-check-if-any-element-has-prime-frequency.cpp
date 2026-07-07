class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (auto a : nums) {
            mp[a]++;
        }

        for (auto a : mp) {
            int count = 0;

            for (int i = 1; i <= a.second; i++) {
                if (a.second % i == 0) {
                    count++;
                }
            }

            if (count == 2) {
                return true;
            }
        }

        return false;
    }
};