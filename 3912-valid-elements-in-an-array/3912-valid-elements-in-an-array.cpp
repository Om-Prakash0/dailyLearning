class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n);
        vector<int>right(n);
        int leftMax=INT_MIN;
        int rightMax=INT_MIN;

        for(int i=0;i<n;i++){
            left[i]=leftMax;
            leftMax=max(leftMax,nums[i]);
        }

        for(int i=n-1;i>=0;i--){
            right[i]=rightMax;
            rightMax=max(rightMax,nums[i]);
        }

        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]>left[i] || nums[i]>right[i]){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};