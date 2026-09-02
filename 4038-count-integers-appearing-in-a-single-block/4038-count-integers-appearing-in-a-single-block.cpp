class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        vector<vector<int>>arr(101);
        for(int i=0;i<n;i++){
            arr[nums[i]].push_back(i); 
        }
        for(int i=0;i<=100;i++){
            if(arr[i].empty()){
                continue;
            }
            int temp=arr[i][0];
            bool flag=true;
            int k=0;
            for(auto a: arr[i]){
                if(temp!=a){
                    flag=false;
                }
                k++;
                temp++;
            }
            if(flag) count++;
        }
        return count;
    }
};