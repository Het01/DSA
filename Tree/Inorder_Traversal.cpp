/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void solve(Node* root,vector<int> &v){
        if(root==NULL){
            return;
        }
        solve(root->left,v);
        v.push_back(root->data);
        solve(root->right,v);
    }
    vector<int> inOrder(Node* root) {
        vector<int> ans;
        solve(root,ans);
        return ans;
    }
};
