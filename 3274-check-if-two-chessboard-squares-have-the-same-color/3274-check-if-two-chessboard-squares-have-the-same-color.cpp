class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int sum1=0,sum2=0;
        for(int i=0;i<coordinate1.size();i++){
            sum1+=coordinate1[i]-'0';
        }
        for(int i=0;i<coordinate2.size();i++){
            sum2+=coordinate2[i]-'0';
        }
        int sum3=sum1+sum2;
        return sum3%2==0 ? true: false;
    }
};