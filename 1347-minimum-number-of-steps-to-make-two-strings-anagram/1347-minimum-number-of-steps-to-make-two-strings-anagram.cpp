class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>a(26,0);
        for(int i=0;i<s.size();i++){
            a[s[i]-'a']++;
            a[t[i]-'a']--;
        }
        int count=0;
        for(auto b:a){
            if(b>0){
                count+=b;
            }
        }
        return count;
    }
};