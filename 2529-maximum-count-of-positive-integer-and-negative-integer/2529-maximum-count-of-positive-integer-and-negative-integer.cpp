class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg=0;
        int pos=0;
        for(auto a: nums){
            if(a>0){
                pos++;
            }
            if(a<0){
                neg++;
            }
        }
        return max(neg,pos);
    }
};