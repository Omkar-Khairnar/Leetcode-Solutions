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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*>mp;
        unordered_map<int,int>parentMap;
        for(vector<int>vec : descriptions){
            int parent = vec[0];
            int child = vec[1];
            TreeNode *parentNode, *childNode;
            if(mp.find(parent) == mp.end()){
                mp[parent] = new TreeNode(parent);
            }
            parentNode = mp[parent];

            if(mp.find(child) == mp.end()){
                mp[child] = new TreeNode(child);
            }
            childNode = mp[child];
            if(vec[2] == 1){
                parentNode->left = childNode;
            }
            else{
                parentNode->right = childNode;
            }
            parentMap[child] = parent;
        }

        for(int i=0; i<descriptions.size(); i++){
            if(parentMap[descriptions[i][0]] == 0) return mp[descriptions[i][0]];
        }

        return NULL;
    }
};