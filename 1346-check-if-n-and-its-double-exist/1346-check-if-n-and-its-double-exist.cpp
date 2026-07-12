class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(auto a: arr){
            mp[a]++;
        }
        for (int i=0;i<n;i++){
            if(mp[arr[i]*2]>0){
                return true;
            }
        }
        return false;
    }
};