class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>arr;
        vector<char>a(26,0),b(26,0);
        int n=s.size();
        int m=p.size();
        if(m > n) return arr;
        for(int i=0;i<m;i++){
            a[s[i]-'a']++;
            b[p[i]-'a']++;
        }
        if(a==b){
            arr.push_back(0);
        }
        for(int j=m;j<n;j++){
            a[s[j-m]-'a']--;
            a[s[j]-'a']++;
            if(a==b){
                arr.push_back(j-m+1);
            }
        }
        return arr;
    }
};