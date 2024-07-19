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
    void postorder(TreeNode *node,TreeNode *parent, char ch,  unordered_map<int,int>mp, vector<TreeNode*>&ans){
        if(!node) return;
        postorder(node->left, node, 'l', mp, ans);
        postorder(node->right, node, 'r', mp, ans);

        if(parent != NULL && mp[node->val]){
            if(ch == 'l') parent->left = NULL;
            else parent->right = NULL;
            if(node->left) ans.push_back(node->left);
            if(node->right) ans.push_back(node->right);
            return ;
        }
        else if(parent == NULL){
            if(mp[node->val]){
                if(node->left) ans.push_back(node->left);
                if(node->right) ans.push_back(node->right);
            }
            else ans.push_back(node);
        } 
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_map<int,int>mp;
        for(int u : to_delete) mp[u]++;
        vector<TreeNode*>ans;
        postorder(root, NULL, 'p', mp, ans);
        return ans;
    }
};