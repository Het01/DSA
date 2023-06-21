

/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

//Function to return a tree created from postorder and inoreder traversals.
    Node* solve(int in[],int post[],int &index,int instart,int inend,int n,map<int,int> &m){
        if(index<0 || instart>inend){
            return NULL;
        }
        int element=post[index--];
        Node* root=new Node(element);
        int position=m[element];
        
        root->right=solve(in,post,index,position+1,inend,n,m);
        root->left=solve(in,post,index,instart,position-1,n,m);
        
        return root;
    }
Node *buildTree(int in[], int post[], int n) {
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[in[i]]=i;
        }
        int postindex=n-1;
        return solve(in,post,postindex,0,n-1,n,m);
}
