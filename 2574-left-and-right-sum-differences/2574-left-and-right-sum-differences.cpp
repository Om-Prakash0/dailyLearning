class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       int n=nums.size();
        vector<int>leftSum(n);
        vector<int>rightSum(n);
        leftSum[0]=0;
        rightSum[n-1]=0;
        for(int i=1;i<n;i++){
            int temp=leftSum[i-1];
            leftSum[i]=temp+nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            int temp=rightSum[i+1];
            rightSum[i]=temp+nums[i+1];
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            int temp=abs(leftSum[i]-rightSum[i]);
            ans.push_back(temp);
        }
        return ans;
    }
};