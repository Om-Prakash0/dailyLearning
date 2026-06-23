class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=-1;
        int j=-1;
        int  n=nums.size();
        for(int k=0;k<n;k++){
            if(nums[k]==target){
                i=k;
                while(k<n && nums[k]==target){
                    j=k;
                    k++;
                }
            }
        }
        vector<int>arr={i,j};
        return arr;
    }
};