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
        vector<int>p;
        if(!root) return p;


        vector<int>left = dfs(root->left, distance);
        vector<int>right = dfs(root->right, distance);

        if(left.size() == 0 && right.size() == 0){
            p.push_back(1);
            return p;
        }

        for(int i=0; i<left.size(); i++){
            for(int j=0; j<right.size(); j++){
                if(left[i]+right[j] <= distance){
                    ans++;
                }
            }
        }

        for(int i=0; i<left.size(); i++){
            p.push_back(++left[i]);
        }
        for(int i=0; i<right.size(); i++){
            p.push_back(++right[i]);
        }

        return p;
    }
    int countPairs(TreeNode* root, int distance) {
        dfs(root, distance);
        return ans;
    }
};