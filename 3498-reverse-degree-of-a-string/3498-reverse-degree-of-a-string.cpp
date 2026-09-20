class Solution {
public:
    int reverseDegree(string s) {
       vector<char>c={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
       unordered_map<char,int>mp;
       for(int i=0;i<26;i++){
            mp[c[i]]=26-i;
       }
       int sum=0;
       for(int i=0;i<s.size();i++){
        sum+=mp[s[i]]*(i+1);
       }
       return sum;
    }
};