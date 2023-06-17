class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        int cnt0 = 0;
        int ans =0;
        int i = 0;

        for(int j = 0 ;  j < n ; j++){
            if(arr[j]==0){

                cnt0++;

            }

            while(cnt0>m){

                if(arr[i]==0){

                    cnt0--;

                }

                i++;

            }

            ans  = max(ans,j-i+1);

        }

        

        return ans;
    }  
};
