class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto a: nums){
            mp[a]++;
        }
        for(int i=1;i<=1000;i++){
            if(mp[i*k]==0){
                return i*k;
            }
        }
        return -1;
    }
};