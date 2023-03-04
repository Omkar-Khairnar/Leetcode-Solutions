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
 bool ans=true;

 void checkTreeSame(TreeNode *p, TreeNode* q ){
    if ((p == NULL && q !=NULL) || (p != NULL && q ==NULL))
    {
        ans=false;
        return;
    }
    else if(p== NULL && q==NULL){
        return;
    }
    else{
        if(p->val != q->val){
            ans=false;
            return;
        }
        else{
            checkTreeSame(p->left, q->left);
            checkTreeSame(p->right, q->right);
        }
    }
    
 }

 bool isSameTree(TreeNode* p, TreeNode* q) {
        checkTreeSame(p,q);
        return ans;
 }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}