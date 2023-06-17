//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    
	    int slargest=-1,largest=-1;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i] > largest){
	            slargest = largest;
	            largest=arr[i];
	        }
	        else if(arr[i] < largest && arr[i] > slargest){
	            slargest=arr[i];
	        }
	    }
	    return slargest;
	}
};
