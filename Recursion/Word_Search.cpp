class Solution {
public:
    
    bool solve(int ind,int i,int j,vector<vector<char>> &board,vector<vector<int>>&vis,string &word,int n,int m){
        
        if(ind >= word.size()){
            return true;
        }
        if(ind == word.size()-1 && word[ind] == board[i][j])
            return true;

        if(word[ind] != board[i][j])
            return false;

        vis[i][j] = true;

        bool ans=false;
        int dr[] = {1,0,0,-1};
        int dc[] = {0,1,-1,0};

        for(int k=0;k<4;k++){
            int nr = i + dr[k];
            int nc = j + dc[k];

            if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc]){
                ans = ans || solve(ind+1,nr,nc,board,vis,word,n,m);
            }
        }
        vis[i][j]=false;
        return ans;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        if(n==1 && m==1 && word.size()==1 && board[0][0]==word[0]){
            return true;
        }
        int ans=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans = ans || solve(0,i,j,board,vis,word,n,m);
            }
        }
        return ans;
        
    }
};
