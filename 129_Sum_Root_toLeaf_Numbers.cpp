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
 int ans=0;
 void findSum(TreeNode* root,int a){
    if(root->left == NULL && root->right == NULL){
        a=a*10+root->val;
        ans+=a;
        return;
    }
    a=a*10+root->val;
    if(root->left) findSum(root->left, a);
    if(root->right) findSum(root->right, a);
 }
 int sumNumbers(TreeNode* root) {
        findSum(root, 0);
        return ans;
    } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}