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

 
 void flatten(TreeNode* root) {
    if(root == NULL || (root->left==NULL && root->right==NULL)) return;

    if(root->left !=NULL){
        flatten(root->left);
        TreeNode *temp=root->right;
        root->right=root->left;
        root->left=NULL;
        TreeNode *t=root->left;
        while(t->right !=NULL){
            t=t->right;
        }
        t->right=temp;
    }
    flatten(root->right);
 }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}