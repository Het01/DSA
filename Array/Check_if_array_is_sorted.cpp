// User function template for C++

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        int f=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                f=0;
                break;
            }
        }
        return f;
    }
};
