class Solution {
public:
    bool isFascinating(int n) {
        string a=to_string(n);
        string b=to_string(2*n);
        string c=to_string(3*n);
        string ans=a+b+c;
        vector<int>arr;
        for(auto a: ans){
            arr.push_back(a-'0');
        }
        unordered_map<int,int>mp;
        for(auto a: arr){
            mp[a]++;
        }
        for(int i=0;i<10;i++){
            if(i==0){
                if(mp[i]>0){
                    return false;
                }
                continue;
            }
            if(mp[i]==0){
                return false;
            }
            else if(mp[i]>1){
                return false;
            }
        }
        return true;
    }
};