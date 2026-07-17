class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        for(auto a: s){
            mp[a]++;
        }
        int k=mp[s[0]];
        for(auto a: mp){
            if(a.second!=k){
                return false;
            }
        }
        return true;
    }
};