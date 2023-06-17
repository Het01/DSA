class Solution{
	
	
	public:
	void leftRotate(int a[], int k, int n) 
	{ 
	   k=k%n;
	   reverse(a,a+k);
	   reverse(a+k,a+n);
	   reverse(a,a+n);
	} 
		 

};
