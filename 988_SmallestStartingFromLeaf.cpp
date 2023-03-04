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
 string ans="~";
 void findString(TreeNode* root,string str){
    if(root->left == NULL && root->right == NULL){
        str= str + char(root->val+97);
        reverse(str.begin(), str.end());
        if(str < ans ) ans=str;
        return;
    }
    str= str + char(root->val+97);
    if(root->left) findString(root->left, str);
    if(root->right) findString(root->right, str);
 }

  string smallestFromLeaf(TreeNode* root) {
        findString(root, "");
       
        return ans;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}