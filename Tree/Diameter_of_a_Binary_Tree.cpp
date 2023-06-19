/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    pair<int,int> solve(Node* root){
        if(root==NULL){
            return {0,0};
        }
        pair<int,int> l = solve(root->left);
        pair<int,int> r = solve(root->right);
        
        pair<int,int> ans;
        ans.second = max(l.second,r.second) + 1;
        ans.first = max(l.first,max(r.first,l.second+r.second+1));
        
        return ans;
    }
    int diameter(Node* root) {
        return solve(root).first;
    }
};
