class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int k) 
    { 
        map<int,int> m;
        int sum=0,ans=0;
        
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(sum==k){
                ans=max(ans,i+1);
            }
            if(m.find(sum-k)!=m.end()){
                ans=max(ans,i-m[sum-k]);
            }
            if(m.find(sum)==m.end()){
                m[sum]=i;
            }
        }
        return ans;
    } 

};
