

/* Structure of Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};*/

/* The function should print all the paths from root
 to leaf nodes of the binary tree */
void solve(Node* root,vector<int> res,vector<vector<int>> &ans){
    if(root==NULL){
        return;
    }
    
    res.push_back(root->data);
    
    if(root->left==NULL && root->right==NULL){
        ans.push_back(res);
    }
    
    solve(root->left,res,ans);
    solve(root->right,res,ans);
    
    res.pop_back();
}
vector<vector<int>> Paths(Node* root)
{
    vector<vector<int>> ans;
    vector<int> res;
    if(root==NULL){
        return ans;
    }
    solve(root,res,ans);
    return ans;
}
