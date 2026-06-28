class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>arr;
        unordered_map<int,int>mp;
        for(auto a: nums){
            mp[a]++;
        }
        for(auto a:nums){
            if(mp[a]==1){
                arr.push_back(a);
            }
        }
        return arr;
    }
};