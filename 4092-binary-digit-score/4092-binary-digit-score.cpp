class Solution {
public:
    int calculateScore(int a, int b) {
        int bitA=0;
        int bitB=0;
        while(a>0){
            int d=a%2;
            if(d==1) bitA++;
            a/=2;
        }
        
        while(b>0){
            int d=b%2;
            if(d==1) bitB++;
            b/=2;
        }
        if(bitA>=bitB) return bitA*bitB;
        return bitB/bitA;
    }
};