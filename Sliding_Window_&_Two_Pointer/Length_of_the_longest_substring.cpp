class Solution{
    public:
    int longestUniqueSubsttr(string S){

        int maxi=0;
        vector<int> st(256,-1);
        int i=0,j=0;
        while(j<S.size()){
            if(st[S[j]]!=-1){
                i=max(i,st[S[j]]+1);
            }
            st[S[j]]=j;
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};
