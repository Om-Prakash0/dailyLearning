class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<pair<int,int>>arrp;
        for(auto a: nums){
            mp[a]++;
        }
        for(auto a: mp){
            arrp.push_back({a.first,a.second});
        }
        sort(arrp.begin(),arrp.end(),[](auto a,auto b){
            return (a.second>b.second);
        });
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(arrp[i].first);
        }
        return ans;
    }
};