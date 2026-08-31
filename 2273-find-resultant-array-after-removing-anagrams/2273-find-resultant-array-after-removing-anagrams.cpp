class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>str;
        string prev="";
        for(auto a:words){
            string temp=a;
            sort(temp.begin(),temp.end());
            if(temp!=prev){
            str.push_back(a);
            prev=temp;
           }
        }
        return str;
    }
};