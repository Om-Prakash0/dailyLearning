class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>maxArr(n);
        vector<int>minArr(n);
        int maxEle=INT_MIN;
        int minEle=INT_MAX;
        for(int i=0;i<n;i++){
            maxEle=max(maxEle,nums[i]);
            maxArr[i]=maxEle;
        }

        for(int i=n-1;i>=0;i--){
            minEle=min(minEle,nums[i]);
            minArr[i]=minEle;
        }
        for(int i=0;i<n;i++){
            if(maxArr[i]-minArr[i]<=k){
                return i;
            } 
        }
        return -1;
    }
};