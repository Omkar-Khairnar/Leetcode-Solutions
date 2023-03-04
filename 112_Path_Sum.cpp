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

   bool checkSum(TreeNode *root, int target, int sum){
     if(root->left == NULL && root->right==NULL){
       if(sum == target) return true;
       else return;
    }
    sum+=root->val;
    if(root->left) checkSum(root->left,target, sum);
    if(root->right) checkSum(root->right,target, sum);
   } 
  bool hasPathSum(TreeNode* root, int targetSum) {
   return checkSum(root,targetSum,0);
    } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}