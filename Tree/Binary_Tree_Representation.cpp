//User function Template for C++

/*struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}*/

class Solution{
public:
    
    void create_tree(node* root0, vector<int> &vec){
        queue<node*> q;
        q.push(root0);
        
        int n = vec.size();
        for(int i=0;i<n/2;i++){
            node* temp = q.front();
            q.pop();
            
            if(2*i+1<n){
                temp->left = newNode(vec[2*i+1]);
            }
            if(2*i+2<n){
                temp->right = newNode(vec[2*i+2]);
            }
            
            q.push(temp->left);
            q.push(temp->right);
        }
    }

};
