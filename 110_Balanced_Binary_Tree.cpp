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

    // O(n^2) approach 
//  int maxlevel=0;
//  int getheight(TreeNode *root, int level){
//     if(!root) return 0;
//     if(level > maxlevel) maxlevel=level;
//     if(root->left) getheight(root->left,level+1);
//     if(root->right) getheight(root->right,level+1);
//     return maxlevel;
//  }

// bool isBalanced(TreeNode* root) {
//     maxlevel=0;
//     int a=0,b=0;
//     if(root->left) a=getheight(root->left,1);   
//     maxlevel=0;
//     if(root->right) b=getheight(root->right,1);   

//     if(abs(a-b)>1) return false;
//     else{
//         return isBalanced(root->left) && isBalanced(root->right);
//     }
// } 
 
      //Efficient approach O(n)

int checkBalance(TreeNode *root){
  if(root ==NULL) return 0;
   int lh=checkBalance(root->left);
   if(lh ==-1) return -1;
   int rh=checkBalance(root->right);
   if(rh==-1) return -1;

   if(abs(lh -rh)>1) return -1;
   else{
       return max(lh,rh)+1;
   }
}

bool isBalanced(TreeNode* root) {
   if(checkBalance(root) == -1) return false;
   return true;
} 
int main(int argc, char const *argv[])
{
 
  return 0;
}