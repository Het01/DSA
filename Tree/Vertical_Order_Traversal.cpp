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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // node,vertical level,horizontal level
        queue<pair<TreeNode*,pair<int,int>>> q;
        
        // vertical level,horizontal level,nodes
        map<int,map<int,multiset<int>>> m;
        
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        q.push({root,{0,0}});
        
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            
            TreeNode* node = temp.first;
            int vl = temp.second.first;
            int hl = temp.second.second;
            
            m[vl][hl].insert(node->val);
            
            if(node->left){
                q.push({node->left,{vl-1,hl+1}});
            }
            if(node->right){
                q.push({node->right,{vl+1,hl+1}});
            }
        }
        
        vector<int> res;
        for(auto i:m){
            for(auto j:i.second){
                for(auto k:j.second){
                    res.push_back(k);
                }
                
            }
            
            ans.push_back(res);
            res.clear();
        }
        return ans;
    }
};
