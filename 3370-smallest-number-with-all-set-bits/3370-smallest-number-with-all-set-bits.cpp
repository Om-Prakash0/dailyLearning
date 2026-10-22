class Solution {
public:
    int smallestNumber(int n) {
        int count=0;
        while(n>0){
            int d=n%2;
            count++;
            n/=2;
        }
        int ans=1;
        int i=2;
        while(count-1>0){
            ans+=i;
            i*=2;
            count--;
        }
        return ans;
    }
};