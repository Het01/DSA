class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isbst(Node*root,int min,int max){
        if(root==NULL){
            return true;
        }
        
        if(root->data > min && root->data < max){
            bool left = isbst(root->left,min,root->data);
            bool right = isbst(root->right,root->data,max);
            return left && right;
        }
        else{
            return false;
        }
    }
    
    bool isBST(Node* root) 
    {
        return isbst(root,INT_MIN,INT_MAX);
    }
};

