class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            set<int>st1;
            set<int>st2;
            for(int j=0;j<n;j++){
                st1.insert(matrix[i][j]);
                st2.insert(matrix[j][i]);
            }
            for(int k=1;k<=n;k++){
                if(st1.find(k)==st1.end()) return false;
            }
            for(int k=1;k<=n;k++){
                if(st2.find(k)==st2.end()) return false;
            }
        }
        return true;
    }
};