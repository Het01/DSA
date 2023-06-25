class Solution{
	public:
	    void solve(int i,string s,string res,vector<string> &ans){
	        if(i==s.size()){
	            if(res.size()>0){
	                ans.push_back(res);
	            }
	            return;
	        }
	        solve(i+1,s,res+s[i],ans);
	        solve(i+1,s,res,ans);
	    }
		vector<string> AllPossibleStrings(string s){
		    vector<string> ans;
		    string res="";
		    solve(0,s,res,ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};


// Input : str = "abc"
// Output: a ab abc ac b bc c
