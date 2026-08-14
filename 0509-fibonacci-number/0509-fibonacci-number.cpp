class Solution {
public:
    int solve(int n, vector<int>&dp){
         if(n<2){
            return n;
        }
        else if(dp[n]!=-1){
            return dp[n];
        }
        else{
            return dp[n]=fib(n-1)+fib(n-2);
        }
        return dp[n];
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};