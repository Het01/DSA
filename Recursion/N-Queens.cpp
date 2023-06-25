class Solution {
public:
    void solve(int c,vector<string> res,vector<vector<string>> &ans,vector<int> &leftRow,vector<int> & upperDiagonal,vector<int> &lowerDiagonal,int n){

        if(c==n){
            ans.push_back(res);
            return;
        }

        for(int r=0;r<n;r++){
            if(leftRow[r]==0 && upperDiagonal[r+c]==0 && lowerDiagonal[n-1+c-r]==0){
                res[r][c] = 'Q';
                leftRow[r] = 1;
                upperDiagonal[r+c] = 1;
                lowerDiagonal[n-1+c-r] = 1;

                solve(c+1,res,ans,leftRow,upperDiagonal,lowerDiagonal,n);

                res[r][c] = '.';
                leftRow[r] = 0;
                upperDiagonal[r+c] = 0;
                lowerDiagonal[n-1+c-r] = 0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> res(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            res[i]=s;
        }

        vector<int> leftRow(n,0),upperDiagonal(2*n-1,0),lowerDiagonal(2*n-1,0);

        solve(0,res,ans,leftRow,upperDiagonal,lowerDiagonal,n);

        return ans;
    }
};
