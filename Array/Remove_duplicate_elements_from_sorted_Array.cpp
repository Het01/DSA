//User function template for C++

class Solution{
public:
// 1 2 3 3 3 3 3 4 4 5 5
// 1 2 3 4 3 3 3 3 4 5 5
    int remove_duplicate(int a[],int n){
        if(n==1){
            return 1;
        }
        int i=0;
        int j=1;
        while(j<n){
            if(a[i]!=a[j]){
                swap(a[i+1],a[j]);
                i++;
            }
            j++;
        }
        return i+1;
    }
};
