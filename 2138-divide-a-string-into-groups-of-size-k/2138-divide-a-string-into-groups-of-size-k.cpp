
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n=s.size();
        int m=n%k;
        if(m!=0){
            for(int i=0;i<k-m;i++){
                s.push_back(fill);
            }
        }
        vector<string>str;
        for(int i=0;i<s.size();i+=k){
            string temp="";
            for(int j=i;j<i+k;j++){
                temp.push_back(s[j]);
            }
            str.push_back(temp);
        }
        return str;
    }
};
