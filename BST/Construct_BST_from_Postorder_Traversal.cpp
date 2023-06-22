

/*struct Node
{
	int data;
	Node *left, *right;
};*/

    Node* solve(int post[],int size,int mini,int maxi,int &i){
        if(i<0){
            return NULL;
        }
        if(post[i]<mini || post[i]>maxi){
            return NULL;
        }
        Node* root=new Node(post[i--]);
        root->right=solve(post,size,root->data,maxi,i);
        root->left=solve(post,size,mini,root->data,i);
        return root;
    }
    Node *constructTree (int post[], int size)
    {
        int mini=INT_MIN;
        int maxi=INT_MAX;
        int i=size-1;
        return solve(post,size,mini,maxi,i);
    }
