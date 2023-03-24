#include <bits/stdc++.h>
 
using namespace std;
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
TreeNode* invertTree(TreeNode* root) {
        if(!root) return NULL;
        TreeNode*left=root->left;
        TreeNode*right=root->right;
        root->left=right;
        root->right=left;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}