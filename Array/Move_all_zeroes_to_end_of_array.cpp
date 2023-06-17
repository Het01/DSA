//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int a[], int n) {
	    int i=0;
	    int j=1;
	    while(j<n){
	        if(a[i]==0){
	            while(a[j]==0 && j+1<n){
	                j++;
	            }
	            swap(a[i],a[j]);
	            
	        }
	        i++;
	        j++;
	    }
	}
};
