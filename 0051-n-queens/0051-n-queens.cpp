class Solution {
public:
    vector<string>board;
    vector<vector<string>>ans;
    bool isSafe(int row,int col,int n){
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q') return false;
        }
        for(int j=0;j<n;j++){
            if(board[row][j]=='Q') return false;
        }
        for(int i=row-1,j=col-1;i>=0 && j>=0 ; i--,j--){
             if(board[i][j]=='Q') return false;
        }
        for(int i=row-1,j=col+1;i>=0 && j<n ; i--,j++){
             if(board[i][j]=='Q') return false;
        }
        return true;
    }
    void backtrack(int row,int n){
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int col=0;col<n;col++){
            if(isSafe(row,col,n)){
                board[row][col]='Q';
                backtrack(row+1,n);
                board[row][col]='.';

            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        ans.clear();
        board = vector<string>(n, string(n,'.'));      
        backtrack(0,n);
        return ans;
    }
};