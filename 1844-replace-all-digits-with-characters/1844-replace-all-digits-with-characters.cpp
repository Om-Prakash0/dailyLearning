class Solution {
public:
    string replaceDigits(string s) {
        string str = "";

        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0) {
                str += s[i];
            } else {
                str += char(str.back() + (s[i] - '0'));
            }
        }

        return str;
    }
};