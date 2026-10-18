class Solution {
public:
    bool hasAlternatingBits(int n) {
        string ans="";
        while(n>0){
            int d=n%2;
            ans+=to_string(d);
            n/=2;
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]==ans[i+1]) return false;
        }
        return true;
    }
};