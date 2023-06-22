

// User function Template for C++

// Function to return the ceil of given number in BST.
int findCeil(Node* root, int input) {
    if (root == NULL) {
        return -1;
    }
    int ans=-1;
    while(root!=NULL){
        if(root->data==input){
            ans=root->data;
            break;
        }
        else if(root->data > input){
            ans = root->data;
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return ans;
    
}
