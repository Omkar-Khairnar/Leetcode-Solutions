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

 vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        TreeNode *curr;
        while(!q.empty()){
            int sz=q.size();
            while (sz>1)
            {
               curr=q.front();
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);   
                q.pop();
                sz--;
            }
            curr=q.front();
            ans.push_back(curr->val);
            q.pop();
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);      
        }
        return ans;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}