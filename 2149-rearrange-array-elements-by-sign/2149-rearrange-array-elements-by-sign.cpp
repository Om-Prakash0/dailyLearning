class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(auto a: nums){
            if(a>0){
                pos.push_back(a);
            }
        }
        for(auto a: nums){
            if(a<0){
                neg.push_back(a);
            }
        }
        vector<int>ans;
        int i=0;
        int j=0;
        while(i!=pos.size() || j!=neg.size()){
            ans.push_back(pos[i]);
            ans.push_back(neg[j]);
            i++;
            j++;
        }
        return ans;
    }
};