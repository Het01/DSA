/* A binary tree node


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


   
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        if(r1==NULL && r2!=NULL){
            return false;
        }
        if(r1!=NULL && r2==NULL){
            return false;
        }
        if(r1==NULL && r2==NULL){
            return true;
        }
        
        bool l = isIdentical(r1->left,r2->left);
        bool r = isIdentical(r1->right,r2->right);
        
        if(l && r && r1->data==r2->data){
            return true;
        }
        return false;
    }
};
