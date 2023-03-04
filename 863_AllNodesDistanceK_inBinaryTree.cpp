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

//This ans is not correct

//  vector<int> ans;
// void printNodesAt_K(TreeNode* root, int K, int ct){
//     if(root ==NULL) return;
//     if(ct ==K){
//         ans.push_back(root->val);
//     }
//     else{
//         ct++;
//         printNodesAt_K(root->left,K,ct);
//         printNodesAt_K(root->right,K,ct);
//     }   
// }
//  void inorder(TreeNode *root,TreeNode* target,int K, bool flag){
//   if(root == NULL) return;
//   else if(flag){
//       inorder(root->left,target,K,flag);
//       if(root == target){
//           flag=false;
//           printNodesAt_K(root,K,0);
//       }
//       inorder(root->right,target,K,flag);
//   }
//  }
// vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
//         bool flag=true;
//         inorder(root,target,k,flag);

//     return ans;
//     } 
int main(int argc, char const *argv[])
{
 
  return 0;
}