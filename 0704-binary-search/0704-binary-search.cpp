class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<=j){
            int m=i+(j-i)/2;
            if(nums[m]==target){
                return m;
            }
            else if(nums[m]>target){
                 j=m-1;
            }
            else{
                i=m+1;
            }
        }
        return -1;
    }
};