class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int sum=0;
        for(int i=0;i<coordinates.size();i++){
            sum+=coordinates[i]-'0';
        }
        if(sum%2==0){
            return false;
        }
        return true;

    }
};