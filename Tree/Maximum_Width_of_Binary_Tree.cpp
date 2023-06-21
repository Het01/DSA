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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        long long maxi=0;

        // node,index
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        int leftMost,rightMost;

        while(!q.empty()){
            int size=q.size();

            long long leftMost = q.front().second;
            long long rightMost = q.back().second;

            maxi=max(maxi,rightMost-leftMost+1);
            
            for(int i=0;i<size;i++){
                TreeNode* temp = q.front().first;
                long long ind = q.front().second - leftMost;  // to avoid overflow
                q.pop();

                if(temp->left){
                    q.push({temp->left,2*ind+1});
                }
                if(temp->right){
                    q.push({temp->right,2*ind+2});
                }

            }
            
        }
        return maxi;
    }
};
