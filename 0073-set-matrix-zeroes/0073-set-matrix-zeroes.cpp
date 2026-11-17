class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<pair<int,int>> arr;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 0) {
                    arr.push_back({i, j});
                }
            }
        }
        for(auto a : arr) {
            int row = a.first;
            int col = a.second;
            for(int i = 0; i < m; i++) {
                matrix[row][i] = 0;
            }
            for(int j = 0; j < n; j++) {
                matrix[j][col] = 0;
            }
        }
    }
};
