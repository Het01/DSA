/* BST Node
struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    key = x;
	    left = NULL;
	    right = NULL;
	}
};
*/

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        if(root==NULL){
            return;
        }
        
        while(root!=NULL){
            if(root->key > key){
                suc = root;
                root = root->left;
            }
            else if(root->key < key){
                pre = root;
                root = root->right;
            }
            else{
                Node* temp = root->left;
                if(temp!=NULL){
                    while(temp->right!=NULL){
                        temp = temp->right;
                    }
                    pre = temp;
                }
                
                temp = root->right;
                if(temp!=NULL){
                    while(temp->left!=NULL){
                        temp = temp->left;
                    }
                    suc = temp;
                }
                break;
            }
        }
    }
};
