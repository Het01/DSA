// User function Template for C++

class Solution {

  public:
    void solve(int i,vector<int> nums,vector<int> res,vector<vector<int>> &ans){
        if(i==nums.size()){
            ans.push_back(res);
            return;
        }
        res.push_back(nums[i]);
        solve(i+1,nums,res,ans);
        while(i<nums.size()-1 && nums[i]==nums[i+1]){
            i++;
        }
        res.pop_back();
        solve(i+1,nums,res,ans);

    }
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> res;
        sort(nums.begin(),nums.end());
        solve(0,nums,res,ans);
        return ans;
    }
};

// Input: 
// nums = [1,2,2] 
// Output: 
// [[],[1],[1,2],[1,2,2],[2],[2,2]]
