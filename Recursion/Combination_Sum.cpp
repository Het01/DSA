//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void solve(int i,vector<int> &A,int target,vector<int> &res,vector<vector<int>> &ans){
        if(i==A.size()){
            return;
        }
        if(target<0){
            return;
        }
        if(target==0){
            // sort(res.begin(),res.end());
            ans.push_back(res);
            return;
        }
        res.push_back(A[i]);
        solve(i,A,target-A[i],res,ans);
        res.pop_back();
        solve(i+1,A,target,res,ans);
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        sort(A.begin(),A.end());
        vector<vector<int>> ans;
        vector<int> res;
        A.erase(unique(A.begin(),A.end()),A.end());
        solve(0,A,B,res,ans);
        // sort(ans.begin(),ans.end());
        return ans;
    }
};


// N = 4
// arr[] = {7,2,6,5}
// B = 16
// Output:
// (2 2 2 2 2 2 2 2)
// (2 2 2 2 2 6)
// (2 2 2 5 5)
// (2 2 5 7)
// (2 2 6 6)
// (2 7 7)
// (5 5 6)
