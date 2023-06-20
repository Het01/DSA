//User function Template for C++
/*Structure of the node of the binary tree is as
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
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        vector<int> res;
    	if(root==NULL){
    	    return res;
    	}
    	queue<Node*> q;
    	q.push(root);
    	
    	bool leftToRight=true;
    	
    	while(!q.empty()){
    	    int size=q.size();
    	    
    	    vector<int> ans(size);
    	    
    	    
    	    for(int i=0;i<size;i++){
    	        Node* temp=q.front();
    	        q.pop();
    	        int index=leftToRight ? i : size-i-1;
    	        ans[index]=temp->data;
    	        
    	        if(temp->left){
    	            q.push(temp->left);
    	        }
    	        if(temp->right){
    	            q.push(temp->right);
    	        }
    	    }
    	    leftToRight=!leftToRight;
    	    for(auto i:ans){
    	        res.push_back(i);
    	    }
    	}
    	return res;
    }
};
