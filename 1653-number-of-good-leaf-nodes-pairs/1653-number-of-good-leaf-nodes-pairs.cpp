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
    int ans = 0;
    vector<int>dfs(TreeNode *root, int distance){
        vector<int>p(10,0);
        if(!root) return p;


        vector<int>left = dfs(root->left, distance);
        vector<int>right = dfs(root->right, distance);

        if(!root->left && !root->right){
            p[0] = 1;
            return p;
        }

        for(int i=0; i<left.size(); i++){
            for(int j=0; j<right.size(); j++){
                if(i+1+j+1 <= distance){
                    ans+= (left[i] * right[j]);
                }
            }
        }

        for(int i=0; i<9; i++){
            p[i+1] = left[i] + right[i]; 
        }

        return p;
    }
    int countPairs(TreeNode* root, int distance) {
        dfs(root, distance);
        return ans;
    }
};