class Solution{
    public:
    //You need to complete this fucntion
    #define MOD 1000000007
    long long power(int N,int R)
    {
       if(R == 0){
            return 1;
        }
        long long temp=power(N,R/2);
        if(R % 2 == 0){
            return (temp*temp)%mod;
        }
        else{
            return (N*((temp*temp)%mod))%mod;
        }
    }

};
