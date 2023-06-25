//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    void solve(int i,int a[],int N,string res,vector<string> &ans,unordered_map<int,string> &mapping){
        if(i>=N){
            ans.push_back(res);
            return;
        }
        int no = a[i];
        string s = mapping[no];
        for(int j=0;j<s.size();j++){
            res.push_back(s[j]);
            solve(i+1,a,N,res,ans,mapping);
            res.pop_back();
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        vector<string> ans;
        string res;
        unordered_map<int,string> mapping = {
            {2,"abc"},
            {3,"def"},
            {4,"ghi"},
            {5,"jkl"},
            {6,"mno"},
            {7,"pqrs"},
            {8,"tuv"},
            {9,"wxyz"}
        };
        solve(0,a,N,res,ans,mapping);
        return ans;
    }
};
