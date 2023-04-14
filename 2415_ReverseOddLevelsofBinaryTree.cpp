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
 TreeNode* reverseOddLevels(TreeNode* root) {
        int level=0;
        queue<TreeNode*>q;
        q.push(root);
        vector<int>v;
        while(!q.empty()){
            int sz=q.size();
            if(level % 2==0){
                  while(sz--){
                    TreeNode* temp=q.front();
                    q.pop();
                    if(temp->left){
                        q.push(temp->left);      
                    }
                    if(temp->right){
                        q.push(temp->right); 
                    }
                   if(temp->left && temp->right){
                        v.push_back(temp->left->val);
                        v.push_back(temp->right->val);
                   } 
                }
            }
            else{   
                 int index=0;
                 reverse(v.begin(), v.end());
                  while(sz--){ 
                    TreeNode* temp=q.front();
                    temp->val=v[index];
                    index++;
                    q.pop();
                    if(temp->left) q.push(temp->left);
                    if(temp->right) q.push(temp->right);
                  }
                  v.clear(); 
                }
            level++;   
        }
        return root;
    }
int main(int argc, char const *argv[])
{
 
  return 0;
}