class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto a: nums){
            mp[a]++;
        }
        int count=0;
        for(auto a: mp){
            if(a.first!=0){
                count++;
            }
        }
        return count;
    }
};