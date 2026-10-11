class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int temp=0;
            if((n%(i+1))==0){
                temp=nums[i]*nums[i];
                sum+=temp;
            }

        }
        return sum;
    }
};