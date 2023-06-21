//User function Template for C++

/*
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
class Solution {
  public:
  
    void BulidParent(Node* root,unordered_map<Node*,Node*> &parent){
        if(root==NULL){
            return;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            
            if(temp->left){
                q.push(temp->left);
                parent[temp->left] = temp;
            }
            if(temp->right){
                q.push(temp->right);
                parent[temp->right] = temp;
            }
        }
        
    }
    
    Node* Search(Node* root,int target){
        if(root==NULL){
            return NULL;
        }
        if(root->data==target){
            return root;
        }
        
        Node* l = Search(root->left,target);
        Node* r = Search(root->right,target);
        
        if(l!=NULL && r==NULL){
            return l;
        }
        if(l==NULL && r!=NULL){
            return r;
        }
        return NULL;
    }

    int minTime(Node* root, int target) 
    {
        if(root==NULL){
            return 0;
        }
        unordered_map<Node*,Node*> parent;
        
        BulidParent(root,parent);
        
        Node* tar = Search(root,target);
        
        if(tar==NULL){
            return 0;
        }
        
        vector<int> ans;
        queue<Node*> q;
        unordered_map<Node*,bool> vis;
        
        q.push(tar);
        vis[tar]=true;
        int c=0;
        
        while(!q.empty()){
            int size = q.size();
            while(size--){
                Node* temp = q.front();
                q.pop();
                
                if(temp->left && !vis[temp->left]){
                    vis[temp->left] = true;
                    q.push(temp->left);
                }
                if(temp->right && !vis[temp->right]){
                    vis[temp->right] = true;
                    q.push(temp->right);
                }
                if(parent[temp] && !vis[parent[temp]]){
                    vis[parent[temp]] = true;
                    q.push(parent[temp]);
                }
            }
            c++;
        }
        
        return c-1;
    }
};
