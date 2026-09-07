class Solution {
public:
    string removeTrailingZeros(string num) {
        string ans="";
        int n=num.size()-1;
        int count=0;
        for(int i=n;i>=0;i--){
            if(num[i]=='0') count++;
            else{
                break;
            }
        }
        for(int i=0;i<num.size()-count;i++){
            ans+=num[i];
        }
        return ans;
    }
};