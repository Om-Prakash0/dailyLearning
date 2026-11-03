
class Solution {
public:
    int minMoves(vector<int>& nums) {
       int product=1;
       int n=nums.size();
       int max=*max_element(nums.begin(),nums.end());
       product = n * max;
       int sum=0;
       for(int i=0;i<n;i++){
          sum+=nums[i];
       }

       return product-sum;
    }
};
