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
 int ct=0;
void isMirror(TreeNode* left, TreeNode *right){
    if(left == NULL && right == NULL){
        return;
    }
    else if((left == NULL && right != NULL) || (left != NULL && right == NULL) ){
       ct++;
        return;
    }
    else if(left->val != right->val) {
       ct++;
        return;
    }
    isMirror(left->left, right->right);
    isMirror(left->right , right->left);
}
bool isSymmetric(TreeNode* root) {
    isMirror(root->left, root->right);
    return !(ct > 0);
} 
int main(int argc, char const *argv[])
{
 
  return 0;
}