class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
         vector<int> ans;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                bool flag=true;
                for(int k=0;k<n;k++){
                    if(matrix[i][j]<matrix[k][j]){
                       flag=false;
                        break;
                    }
                }
                for(int l=0;l<m;l++){
                    if(matrix[i][j]>matrix[i][l]){
                        flag=false;
                         break;
                    }
                }
                if(flag)
                    ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }
};