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
    int maxi = INT_MIN;
    vector<int> fun(TreeNode*root){
        if(!root){
            return {1, 0, INT_MAX, INT_MIN}; //bool, sum, min, max
        }

        vector<int> l = fun(root->left);
        vector<int> r = fun(root->right);

        
        if(l[0] && r[0]){
            if(root->val > l[3] && root->val < r[2]){
                int sum = (l[1]) + (r[1]) + (root->val );
                maxi = max(maxi, sum);
                return {1, sum, min(l[2], root->val), max(r[3], root->val)};
            }
        }
        return {0,0, INT_MIN, INT_MAX};
    }
    int maxSumBST(TreeNode* root) {
        if(!root) return 0;
        fun(root);
        return maxi < 0 ? 0 : maxi;
    }
};