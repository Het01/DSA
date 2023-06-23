class Solution {
  public:
    int longestOnes(int n, vector<int>& nums, int k) {
        int maxi=0;
        int c=0;
        
        int i=0,j=0;
        while(j < n){
            if(nums[j]==0){
                c++;
            }
            
            while(c > k){
                if(nums[i]==0){
                    c--;
                }
                i++;
            }
            
            maxi = max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};
