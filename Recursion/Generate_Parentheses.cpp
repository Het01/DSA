//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void solve(int o,int c,string res,vector<string> &ans){
        if(c<o || o<0 || c<0){
            return;
        }
        if(o==0 && c==0){
            ans.push_back(res);
            return;
        }
        solve(o-1,c,res+"(",ans);
        solve(o,c-1,res+")",ans);
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string> ans;
        solve(n,n,"",ans);
        return ans;
    }
};
