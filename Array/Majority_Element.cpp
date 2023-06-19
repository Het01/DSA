//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        int c=0,el=0;
        for(int i=0;i<size;i++){
            if(c==0){
                el=a[i];
            }
            if(el==a[i]){
                c++;
            }
            else{
                c--;
            }
        }
        
        c=0;
        for(int i=0;i<size;i++){
            if(el==a[i]){
                c++;
            }
        }
        if(c>size/2){
            return el;
        }
        return -1;
    }
};
