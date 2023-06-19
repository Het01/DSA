/* A binary tree node structure

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

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    pair<bool,int> solve(Node* root){
        if(root==NULL){
            return {true,0};
        }
        pair<bool,int> l = solve(root->left);
        pair<bool,int> r = solve(root->right);
        
        pair<bool,int> ans;
        if(l.first && r.first && abs(l.second-r.second)<=1){
            ans.first = true;
        }
        else{
            ans.first = false;
        }
        
        ans.second = max(l.second,r.second) + 1;
        
        return ans;
    }
    bool isBalanced(Node *root)
    {
        return solve(root).first;
    }
};
