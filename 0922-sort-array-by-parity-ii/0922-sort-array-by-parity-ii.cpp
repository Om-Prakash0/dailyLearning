class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        for(auto a: nums){
            if(a%2==0){
                even.push_back(a);
            }
        }
        for(auto a: nums){
            if(a%2!=0){
                odd.push_back(a);
            }
        }
        vector<int>arr;
        int n =nums.size();
        int j=0, k=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                arr.push_back(even[j]);
                j++;
            }
            else{
                arr.push_back(odd[k]);
                k++;
            }
        }
        return arr;
    }
};