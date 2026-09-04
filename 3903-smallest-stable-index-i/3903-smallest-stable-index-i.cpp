class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int StableIdx=INT_MAX;
        int n=nums.size();
        int left=INT_MIN;
        for(int i=0;i<n;i++){
            left=max(left,nums[i]);
            int right=INT_MAX;
            for(int j=i;j<n;j++){
                right=min(right,nums[j]);
            }
            if(left-right<=k){
                StableIdx=min(StableIdx,i);
            }
        }
        if(StableIdx==INT_MAX) return -1;
        return StableIdx;
    }
};