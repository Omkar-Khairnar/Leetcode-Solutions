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
 TreeNode* first=NULL;
 TreeNode *second=NULL;
 TreeNode *pr= new TreeNode(INT_MIN);
 void inorder(TreeNode* root){
    if(!root) return;
    inorder(root->left);
    if(root->val < pr->val){
        first=pr;
        second=root;
    }
    if(first && root->val < pr->val ){
        second=root;
    }
    pr=root;

    inorder(root->right);
 }
 void recoverTree(TreeNode* root) {
        inorder(root);
        swap(first->val, second->val);

    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}