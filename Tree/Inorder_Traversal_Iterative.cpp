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

    vector<int> inOrder(Node* root) {
        vector<int> ans;
        stack<Node*> st;
        while(true){
            if(root!=NULL){
                st.push(root);
                root=root->left;
            }
            else{
                if(st.empty()){
                    break;
                }
                root = st.top();
                ans.push_back(root->data);
                st.pop();
                root=root->right;
            }
        }
        return ans;
    }
};
