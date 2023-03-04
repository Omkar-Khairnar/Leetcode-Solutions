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
    //Naive Solution -->Works for Every Tree
//  int countNodes(TreeNode* root) {
//        if(root == NULL) return 0; 
//         return 1+countNodes(root->left)+countNodes(root->right);
//     }
int lheight(TreeNode *root){
    if(root == NULL) return 0;
    int lh=0;
    while (root)
    {
        lh++;
        root=root->left;
    }
    return lh;
}
int rheight(TreeNode *root){
    if(root == NULL) return 0;
    int rh=0;
    while (root)
    {
        rh++;
        root=root->right;
    }
    return rh;
}

int countNodes(TreeNode* root){
    int lh=lheight(root);
    int rh=rheight(root);
    if(lh == rh) return (pow(2,lh)-1);

    return 1+countNodes(root->left)+countNodes(root->right);
}


 
int main(int argc, char const *argv[])
{
 
  return 0;
}