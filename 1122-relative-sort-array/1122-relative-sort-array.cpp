class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>arr;
        int n=arr1.size();
        int m=arr2.size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr2[i]==arr1[j]){
                    arr.push_back(arr1[j]);
                    arr1[j]=-1;
                }
                
            }
        }
        sort(arr1.begin(),arr1.end());
        for(int j=0;j<n;j++){ 
                if(arr1[j]!=-1){
                    arr.push_back(arr1[j]);
                }
        }
        return arr;
    }
};