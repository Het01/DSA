class Solution{
#define MOD 1000000007
	public:
	int solve(int i,int arr[],int n,int target,vector<vector<int>> &dp){
	    if(i<0){
	        if(target==0){
	            return 1;
	        }


	        else{
	            return 0;
	        }
	    }
	    if(target<0){
	        return 0;
	    }
	    
	    if(dp[i][target]!=-1){
	        return dp[i][target];
	    }
	    int inc = solve(i-1,arr,n,target-arr[i],dp);
	    int exc = solve(i-1,arr,n,target,dp);
	    
	    return dp[i][target] = (inc%MOD+exc%MOD)%MOD;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        vector<vector<int>> dp(n+1,vector<int> (sum+1,-1));
        return solve(n-1,arr,n,sum,dp);
        
	}
	  
};


// Input: N = 6, arr[] = {2, 3, 5, 6, 8, 10}
//        sum = 10
// Output: 3
// Explanation: {2, 3, 5}, {2, 8}, {10}
