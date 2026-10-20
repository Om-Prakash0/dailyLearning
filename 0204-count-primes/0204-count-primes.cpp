class Solution {
public:
    int countPrimes(int n) {
        vector<bool>arr(n+1,true);
        int count=0;
        for(int i=2;i<n;i++){
            if(arr[i]) count++;
            for(int j=i*2;j<n;j=i+j){
                arr[j]=false;
            }
        }
        return count;
    }
};