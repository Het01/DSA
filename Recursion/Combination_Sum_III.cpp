class Solution {
  public:
    void solve(int i,int target,int K,vector<int> res,vector<vector<int>> &ans){
        if(i==10){
            if(res.size()==K && target==0){
                ans.push_back(res);
            }
            return;
        }
        res.push_back(i);
        solve(i+1,target-i,K,res,ans);
        res.pop_back();
        
        solve(i+1,target,K,res,ans);
    }
    vector<vector<int>> combinationSum(int K, int N) {
        vector<vector<int>> ans;
        vector<int> res;
        solve(1,N,K,res,ans);
        return ans;
    }
};

// Input:
// K = 3
// N = 9
// Output: { {1, 2, 6}, {1, 3, 5}, {2, 3, 4} }
