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
 int mn=INT_MAX;
 int previous=INT_MAX;
  void helper(TreeNode *root){
    if(!root) return;
    helper(root->left);
    mn=min(abs(previous - root->val), mn);
    previous=root->val;
    helper(root->right);
  }
 int minDiffInBST(TreeNode* root) {
        helper(root);
        return mn;
    } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}