class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto a: nums){
            mp[a]++;
        }
        for(auto a: mp){
            if(a.second==1){
                return a.first;
            }
        }
        return 0;
    }
};