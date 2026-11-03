class Solution {
public:
    int minMoves2(vector<int>& nums) {
       int n=nums.size();
       sort(nums.begin(),nums.end());
       int k=nums[n/2];
       int ans=0;;
       for(auto a: nums){
        int temp=abs(a-k);
        ans+=temp;
       }
       return ans;
    }
};