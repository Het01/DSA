/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* solve(vector<int> &in,vector<int> &pre,int &preIndex,int inStart,int inEnd,int n,map<int,int> &m){
        if(preIndex>=n || inStart>inEnd){
            return NULL;
        }
        
        int element = pre[preIndex];
        preIndex++;
        TreeNode* root = new TreeNode(element);
        int pos = m[element];
        
        root->left = solve(in,pre,preIndex,inStart,pos-1,n,m);
        root->right = solve(in,pre,preIndex,pos+1,inEnd,n,m);
        
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[inorder[i]]=i;
        }
        int preIndex = 0;
        
        return solve(inorder,preorder,preIndex,0,n-1,n,m);
    }
};
