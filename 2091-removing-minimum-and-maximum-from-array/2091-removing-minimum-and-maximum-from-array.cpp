class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        vector<int>arr;
        int minEle=INT_MAX;
        int maxEle=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int temp=nums[i];
            minEle=min(minEle,temp);
            maxEle=max(maxEle,temp);
        }
    
        if(n==1){
            return 1;
        }
        int minIdx;
        int maxIdx;
        for(int i=0;i<n;i++){
            if(nums[i]==minEle){
               minIdx=i;
            }

            if(nums[i]==maxEle){
              maxIdx=i;
            }
        }
        
        int leftIdx=min(minIdx,maxIdx);
        int rightIdx=max(maxIdx,minIdx);
        int front=rightIdx+1;
        int back=n-leftIdx;
        int both=(leftIdx+1)+(n-rightIdx);
        return min({both,front,back});

    }
};