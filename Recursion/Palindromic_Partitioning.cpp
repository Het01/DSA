// User function Template for C++

class Solution{
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
    
    int solve(int i,string s,vector<int> &dp){
        if(i==s.size()){
            // ans.push_back(res);
            return 1;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        if(isPalindrome(s,i,s.size()-1)){
            return 0;
        }
        
        int ans = INT_MAX;
        for(int j=i;j<s.size();j++){
            if(isPalindrome(s,i,j) && solve(j+1,s,dp)!=INT_MAX){
                // res.push_back(s.substr(i,j-i+1));
                ans = min(ans,1 + solve(j+1,s,dp));
                // res.pop_back();
            }
        }
        
        return dp[i] = ans;
    }
    int palindromicPartition(string str)
    {
        // vector<vector<string>> ans;
        // vector<string> res;
        vector<int> dp(str.size()+1,-1);
        return solve(0,str,dp);
        
    }
};
