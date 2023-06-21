// User function Template for C++

class Solution {
  public:
    int LeftHeight(Node* root){
        int c=0;
        while(root!=NULL){
            c++;
            root=root->left;
        }
        return c;
    }
    
    int RightHeight(Node* root){
        int c=0;
        while(root!=NULL){
            c++;
            root=root->right;
        }
        return c;
    }
    
    int countNodes(Node* root) {
        if(root==NULL){
            return 0;
        }
        
        int lh = LeftHeight(root);
        int rh = RightHeight(root);
        
        if(lh==rh){
            return pow(2,lh) - 1;
        }
        
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
