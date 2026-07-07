class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int>arr;
        while(n>0){
            int d=n%10;
            if(d!=0){
                arr.push_back(d);
            }
            n=n/10;
        }
        reverse(arr.begin(),arr.end());
        int sum=0;
        for(auto a: arr){
            sum+=a;
        }
        long long num=0;
        for(auto a: arr){
            num=num*10+a;
        }
        return num*sum;

    }
};