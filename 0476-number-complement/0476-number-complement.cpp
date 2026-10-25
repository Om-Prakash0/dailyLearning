class Solution {
public:
    int findComplement(int num) {
        if (num == 0)
         return 1;
        string str="";
        while(num>0){
            int d=num%2;
            if(d==1) d=0;
            else d=1;
            str+=to_string(d);
            num/=2;
        }
        long long ans=0;
        int i=0;
        int n=str.size();
        long long j=1;
        while(i<n){
            ans+=(str[i]-'0')*j;
            j*=2;
            i++;
        }
        return ans;

    }
};