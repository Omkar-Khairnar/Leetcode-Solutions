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
   
  TreeNode* removeLeafNodes(TreeNode* root, int target) {
       if(!root) return NULL;
       else if(root->val==target && !root->left && !root->right ){
            root=NULL;
            return NULL;
       }

       root->left=removeLeafNodes(root->left,target);
       root->right=removeLeafNodes(root->right, target);

        if(root->val==target && !root->left && !root->right ){
            root=NULL;
            return NULL;
       }
       return root;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}