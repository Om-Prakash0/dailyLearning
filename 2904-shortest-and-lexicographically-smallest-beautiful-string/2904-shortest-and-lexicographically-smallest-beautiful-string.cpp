class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left = 0;
        int ones = 0;
        string ans = "";

        for (int right = 0; right < s.length(); right++) {

            if (s[right] == '1') {
                ones++;
            }

            while (ones == k) {

                while (s[left] == '0') {
                    left++;
                }

                string current = s.substr(left, right - left + 1);

                if (ans == "" ||
                    current.length() < ans.length() ||
                    (current.length() == ans.length() && current < ans)) {
                    ans = current;
                }

                if (s[left] == '1') {
                    ones--;
                }

                left++;
            }
        }

        return ans;
    }
};