class Solution {
public:
    int helper(vector<int>&nums,int ind,vector<int>&dp){
        if(ind>=nums.size()) return 0;

        if(dp[ind]!=-1) return dp[ind];

        int rc=nums[ind] + helper(nums,ind+2,dp);
        int sc=helper(nums,ind+1,dp);

        return dp[ind]=max(rc,sc);
    }

    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return helper(nums,0,dp);
    }
};