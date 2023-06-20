/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool solve(Node* root1,Node* root2){
        if(root1!=NULL && root2==NULL){
            return false;
        }
        if(root1==NULL && root2!=NULL){
            return false;
        }
        if(root1==NULL && root2==NULL){
            return true;
        }

        bool l = solve(root1->left,root2->right);
        bool r = solve(root1->right,root2->left);

        return (l && r && root1->data==root2->data);

    }

    bool isSymmetric(struct Node* root)
    {
	    if(root==NULL){
	        return true;
	    }
	    return solve(root->left,root->right);
    }
};
