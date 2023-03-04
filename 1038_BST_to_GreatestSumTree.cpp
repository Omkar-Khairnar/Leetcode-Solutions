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

 //  Approach-> 1) But it traverse twice throughout the BST
// int TotalSum=0;
//  void allNodesSum(TreeNode *root){
//     if(!root) return;
//     allNodesSum(root->left);
//     TotalSum+=root->val;
//     allNodesSum(root->right);
//  }

//  void inorder_ChangeValues(TreeNode *root){
//     if(!root) return;
//     inorder_ChangeValues(root->left);
//     TotalSum-=root->val;
//     root->val+=TotalSum;
//     inorder_ChangeValues(root->right);
//  }

//  TreeNode* bstToGst(TreeNode* root) {
//         allNodesSum(root);
//         inorder_ChangeValues(root);
//         return root;
//     } 
 

 //Apprach 2): Traverse only Once
    int sum=0;
  TreeNode* bstToGst(TreeNode* root) {
    if(root){
        if(root->right) bstToGst(root->right);
        root->val+=sum;
        sum=root->val;

        if(root->left) bstToGst(root->left);
    }
    return root;
  }

int main(int argc, char const *argv[])
{
 
  return 0;
}