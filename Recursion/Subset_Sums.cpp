class Solution
{
public:
    void solve(int i,int sum,vector<int> &arr,vector<int> &ans){
        if(i==arr.size()){
            ans.push_back(sum);
            return;
        }
        solve(i+1,sum+arr[i],arr,ans);
        solve(i+1,sum,arr,ans);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        solve(0,0,arr,ans);
        return ans;
    }
};

// N = 2
// arr[] = {2, 3}
// Output:
// 0 2 3 5
// Explanation:
// When no elements is taken then Sum = 0.
// When only 2 is taken then Sum = 2.
// When only 3 is taken then Sum = 3.
// When element 2 and 3 are taken then 
// Sum = 2+3 = 5.
