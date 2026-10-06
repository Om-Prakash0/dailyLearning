class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int closing = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(')
                st.push(s[i]);
            else {
                if (st.size()>0 && (st.top() == '(' && s[i] == ')'))
                    st.pop();
                else {
                    closing++;
                }
            }
        }
        return closing + st.size();
    }
};