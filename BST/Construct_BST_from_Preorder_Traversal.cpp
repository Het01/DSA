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
    TreeNode* solve(vector<int> &pre,int min,int max,int &preIndex){
        if(preIndex>=pre.size()){
            return NULL;
        }

        if(pre[preIndex] < min || pre[preIndex] > max){
            return NULL;
        }

        TreeNode* root = new TreeNode(pre[preIndex]);
        preIndex++;
        root->left = solve(pre,min,root->val,preIndex);
        root->right = solve(pre,root->val,max,preIndex);

        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int preIndex = 0;
        
        return solve(preorder,INT_MIN,INT_MAX,preIndex);
    }
};
