

// Function to insert a node in a BST.
Node* insert(Node* root, int key) {
    if(root==NULL){
        Node* n = new Node(key);
        return n;
    }
    if(root->data==key){
        return root;
    }
    
    if(root->data < key){
        root->right = insert(root->right,key);
    }
    else{
        root->left = insert(root->left,key);
    }
    
    return root;
}
