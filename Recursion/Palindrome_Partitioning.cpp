class Solution {
public:
    bool isPalindrome(string s,int i,int j){
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void solve(int i,string s,vector<string> res,vector<vector<string>> &ans){
        if(i==s.size()){
            ans.push_back(res);
            return;
        }

        for(int j=i;j<s.size();j++){
            if(isPalindrome(s,i,j)){
                res.push_back(s.substr(i,j-i+1));
                solve(j+1,s,res,ans);
                res.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> res;
        solve(0,s,res,ans);
        return ans;
    }
};


// Input: s = "aab"
// Output: [["a","a","b"],["aa","b"]]
