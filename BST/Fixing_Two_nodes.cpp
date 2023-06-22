/*
struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void inorder(Node* root,Node* &prev,Node* &first,Node* &last){
        if(root==NULL){
            return;
        }
        
        inorder(root->left,prev,first,last);
        
        if(prev!=NULL && root->data < prev->data){
            if(first==NULL){
                first = prev;
                last = root;      // if two swapable nodes are adjecent 
            }
            else{
                last = root;
            }
        }
        
        prev = root;
        
        inorder(root->right,prev,first,last);
    }
    void correctBST( struct Node* root )
    {
        Node* first = NULL;
        Node* last = NULL;
        Node* prev = NULL;
        
        inorder(root,prev,first,last);
        
        swap(first->data,last->data);
    }
};
