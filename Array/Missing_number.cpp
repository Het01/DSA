

int missingNumber(int A[], int N)
{
    int sum = (N*(N+1))/2;
    int ans=0;
    for(int i=0;i<N-1;i++){
        ans+=A[i];
    }
    return sum-ans;
}
