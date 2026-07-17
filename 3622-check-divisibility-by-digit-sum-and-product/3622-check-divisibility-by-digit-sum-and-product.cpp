class Solution {
public:
    bool checkDivisibility(int n) {
        int original=n;
        int dsum=0;
        int dproduct=1;
        while(n>0){
            int d=n%10;
            dsum+=d;
            dproduct*=d;
            n=n/10;
        }
        int sum=dproduct+dsum;
        return original%sum==0 ? true : false;
    }
};