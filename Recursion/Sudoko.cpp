class Solution 
{
    public:
    //Function to find a solved Sudoku. 
    bool isValid(int k,int r,int c,int grid[N][N]){
        for(int i=0;i<9;i++){
            if(grid[r][i]==k){
                return false;
            }
            if(grid[i][c]==k){
                return false;
            }
            if(grid[3*(r/3) + i/3][3*(c/3) + i%3]==k){
                return false;
            }
        }
        return true;
    }
    bool SolveSudoku(int grid[N][N])  
    { 
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j]==0){
                    for(int k=1;k<=9;k++){
                        if(isValid(k,i,j,grid)){
                            grid[i][j] = k;
                            
                            if(SolveSudoku(grid)){
                                return true;
                            }
                            else{
                                grid[i][j] = 0;
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout<<grid[i][j]<<" ";
            }
            // cout<<endl;
        }
    }
};
