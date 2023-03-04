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
 void TraverseTree(TreeNode* root, int level){
    if(root->left == NULL && root->right==NULL){
        mn=min(mn,level);
        return;
    }

    if(root->left) TraverseTree(root->left, level+1);
    if(root->right) TraverseTree(root->right, level+1);
 }
 int minDepth(TreeNode* root) {
    if(root ==NULL) return 0;
    TraverseTree(root,1);
       return mn; 
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}