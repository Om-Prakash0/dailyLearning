class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int>arr;
        int k=nums1[0];
        arr.push_back(k);
        for(int i=1;i<nums1.size();i++){
            arr.push_back(k);
        }
        int a=arr[0];
        if(a%2==0){
            for(int i=0;i<nums1.size();i++){
                if(arr[i]%2!=0) return false;
            }
        }
        else{
            for(int i=0;i<nums1.size();i++){
                if(arr[i]%2==0) return false;
            }
        }
        return true;
    }
};