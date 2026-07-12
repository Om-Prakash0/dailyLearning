class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>temp=score;
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());
        unordered_map<int,int>mp;
        for(int i=0;i<temp.size();i++){
            mp[temp[i]]=i+1;
        }
        vector<string>str;
        for(int i=0;i<score.size();i++){
            if(mp[score[i]]==1){
                str.push_back("Gold Medal");
            }
            else if(mp[score[i]]==2){
                str.push_back("Silver Medal");
            }
            else if(mp[score[i]]==3){
                str.push_back("Bronze Medal");
            }
            else{
                str.push_back(to_string(mp[score[i]]));
            }
        }
        return str;
    }
};