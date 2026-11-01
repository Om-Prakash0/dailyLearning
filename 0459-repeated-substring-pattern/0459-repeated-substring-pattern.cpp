class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string str=s+s;
        str.erase(0,1);
        str.erase(str.size()-1,1);
        return str.find(s)!=string::npos;
    }
};