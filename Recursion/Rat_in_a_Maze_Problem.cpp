// User function template for C++

class Solution{
    public:
    bool isValid(int i,int j,int n){
        return (i>=0 && i<n && j>=0 && j<n);
    }
    
    void solve(int i,int j,vector<vector<int>> &m,string res,vector<string> &ans,vector<vector<int>> &vis,int n){
        if(i==n-1 && j==n-1){
            ans.push_back(res);
            return;
        }
        
        // Down
        if(isValid(i+1,j,n) && m[i+1][j]==1 && !vis[i+1][j]){
            vis[i][j] = 1;
            solve(i+1,j,m,res + 'D',ans,vis,n);
            vis[i][j] = 0;
        }
        
        // left
        if(isValid(i,j-1,n) && m[i][j-1]==1 && !vis[i][j-1]){
            vis[i][j] = 1;
            solve(i,j-1,m,res + 'L',ans,vis,n);
            vis[i][j] = 0;
        }
        
        // right
        if(isValid(i,j+1,n) && m[i][j+1]==1 && !vis[i][j+1]){
            vis[i][j] = 1;
            solve(i,j+1,m,res + 'R',ans,vis,n);
            vis[i][j] = 0;
        }
        
        // up
        if(isValid(i-1,j,n) && m[i-1][j]==1 && !vis[i-1][j]){
            vis[i][j] = 1;
            solve(i-1,j,m,res + 'U',ans,vis,n);
            vis[i][j] = 0;
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        string res="";
        if(m[0][0]==0){
            return ans;
        }
        vector<vector<int>> vis(n,vector<int>(n,0));
        solve(0,0,m,res,ans,vis,n);
        return ans;
    }
};

    
