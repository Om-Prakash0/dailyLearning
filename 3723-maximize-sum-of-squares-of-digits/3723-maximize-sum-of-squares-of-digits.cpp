class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
       int n=num;
       string ans="";
        int count=0;
        int k=sum;
        while(k>0){
            count++;
            k-=9;
        }
        if(count>num) return "";

       while(n>0){
        if(sum<9){
           ans+=to_string(sum);
           sum=sum-sum;
        }
        else if(sum==0){
            ans+="0";
        }
        else{
            ans+="9";
            sum=sum-9;
        }
        n--;
       }
        return ans;
    }
};