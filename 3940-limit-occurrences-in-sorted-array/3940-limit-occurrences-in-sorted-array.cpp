class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> arr;
        unordered_map<int,int> mp;

        for(int x : nums){
            if(mp[x] < k){
                arr.push_back(x);
                mp[x]++;
            }
        }

        return arr;
    }
};