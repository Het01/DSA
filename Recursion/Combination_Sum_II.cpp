// User function Template for C++

class Solution {
  public:
    void solve(int i,int target,vector<int> &nums,vector<int> &res,vector<vector<int>> &ans){
        if(i==nums.size()){
            if(target==0){
                ans.push_back(res);
            }
            return;
            
        }
        if(target<0){
            return;
        }
        
        
        res.push_back(nums[i]);
        solve(i+1,target-nums[i],nums,res,ans);
        while(i<nums.size()-1 && nums[i]==nums[i+1]){
            i++;
        }
        res.pop_back();
        
        solve(i+1,target,nums,res,ans);
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> res;
        
        solve(0,target,candidates,res,ans);
        
        return ans;
    }
};



// Input:  candidates = [10,1,2,7,6,1,5], target = 8. 
// Output:  [[1,1,6], [1,2,5], [1,7], [2,6]]. 
