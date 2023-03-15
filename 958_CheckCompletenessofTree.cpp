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
  
   bool isCompleteTree(TreeNode* root) {
        queue<TreeNode *> q;
        q.push(root);
        TreeNode* temp=NULL;
        bool check =false;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
               temp=q.front();
               q.pop();
               if(temp == NULL){
                 check=true;
                 continue;
               }
               if(temp && check ) return false;
               q.push(temp->left);
               q.push(temp->right);
            }
        }
        return true;
    } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}