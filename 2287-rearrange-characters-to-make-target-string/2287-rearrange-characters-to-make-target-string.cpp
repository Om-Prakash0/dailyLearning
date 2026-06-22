class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> mp1, mp2;

        for (char c : target) {
            mp1[c]++;
        }

        for (char c : s) {
            mp2[c]++;
        }

        int ans = INT_MAX;

        for (auto &p : mp1) {
            ans = min(ans, mp2[p.first] / p.second);
        }

        return ans;
    }
};