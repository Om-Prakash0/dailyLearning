class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            int k=nums[i];
            while(k>0){
                int d=k%10;
                sum+=d;
                k/=10;
            }
            nums[i]=sum;
        }
        int minimum=INT_MAX;
        for(auto a: nums){
            minimum=min(minimum,a);
        }
        return minimum;
    }
};