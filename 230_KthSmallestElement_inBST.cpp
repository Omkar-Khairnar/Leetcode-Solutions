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
     int ct=0, ans; 
  void preorder(TreeNode* root, int k){
    if(root != nullptr){
        preorder(root->left,k);
        ct++;
        if(ct == k){
            ans=root->val;
        }
        preorder(root->right,k);
    }
  }

  int kthSmallest(TreeNode* root, int k) {
        preorder(root,k);
        return ans;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}