class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=INT_MIN;
        int n=nums.size();
        if(n==1 || n==0){
            return 0;
        }
        for(int i=0;i<n-1;i++){
            int val=nums[i+1]-nums[i];
            ans=max(ans,val);
        }
        return ans;
    }
};