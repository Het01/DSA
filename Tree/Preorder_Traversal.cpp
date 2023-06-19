

/* A binary tree node has data, pointer to left child
   and a pointer to right child  

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

//Function to return a list containing the preorder traversal of the tree.
void solve(Node* root,vector<int> &v){
        if(root==NULL){
            return;
        }
        v.push_back(root->data);
        solve(root->left,v);
        solve(root->right,v);
}
vector <int> preorder(Node* root)
{
    vector<int> ans;
    solve(root,ans);
    return ans;
}
