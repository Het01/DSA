/*Complete the function below
Node is as follows
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
    // root : the root Node of the given BST
    // target : the target sum
    void inorder(Node* root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    
    int isPairPresent(struct Node *root, int target)
    {
        vector<int> ans;
        inorder(root,ans);
        
        int i = 0;
        int j = ans.size()-1;
        
        while(i<j){
            if(ans[i]+ans[j]==target){
                return 1;
            }
            if(ans[i]+ans[j] < target){
                i++;
            }
            else{
                j--;
            }
        }
        return 0;
    }
};
