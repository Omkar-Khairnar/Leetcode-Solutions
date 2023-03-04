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
 vector<int> vec;
 void inorder(TreeNode *root){
   if(!root) return;
   inorder(root->left);
   vec.push_back(root->val);
   inorder(root->right);
 }
    TreeNode* increasingBST(TreeNode* root) {
      inorder(root);
     
      TreeNode *curr=new TreeNode(vec[0]);
      TreeNode *ans=curr;

      int index=1;
      while(index <vec.size()){
          TreeNode* temp=new TreeNode(vec[index++]);
          curr->right=temp;
          curr=curr->right;
      }
      return ans;
        
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}