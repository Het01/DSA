/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        
        // node,vertical level
        queue<pair<Node*,int>> q;
        
        // vertical level,first node
        map<int,int> m;
        
        q.push({root,0});
        while(!q.empty()){
            auto temp =q.front();
            q.pop();
            
            Node* node = temp.first;
            int vl = temp.second;
            if(m.find(vl)==m.end()){
                m[vl]=node->data;
            }
            
            if(node->left){
                q.push({node->left,vl-1});
            }
            if(node->right){
                q.push({node->right,vl+1});
            }
        }
        
        for(auto i:m){
            ans.push_back(i.second);
        }
        return ans;
    }

};
