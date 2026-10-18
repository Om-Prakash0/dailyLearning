class Solution {
public:
    bool isPrime(int count){
        int temp=0;
        for(int i=1;i<=count;i++){
            if(count%i==0) temp++;
            if(temp>2 || count==1) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++){
            int num=i;
            int count=0;
            while(num>0){
                int d=num%2;
                if(d==1) count++;
                num/=2;
            }
            if(isPrime(count)) ans++;
        }
        return ans;
    }
};