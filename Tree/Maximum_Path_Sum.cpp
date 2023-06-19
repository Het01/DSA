// User Fuction template for C++

class Solution {
  public:
    //Function to return maximum path sum from any node in a tree.
    int solve(Node* root,int &maxi){
        if(root==NULL){
            return 0;
        }
        int l = max(0,solve(root->left,maxi));
        int r = max(0,solve(root->right,maxi));
        
        maxi = max(maxi,l+r+root->data);
        return max(l,r)+root->data;
    }
    int findMaxSum(Node* root)
    {
        int maxi = INT_MIN;
        int ans = solve(root,maxi);
        return maxi;
    }
};
