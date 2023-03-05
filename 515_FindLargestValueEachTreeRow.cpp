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

 vector<int> largestValues(TreeNode* root) {
          vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        int sz=-1;
        int mx=INT_MIN;
        while (!q.empty())
        {
            sz=q.size();
            mx=INT_MIN;
          for(int i=0; i<sz; i++){
                TreeNode* front=q.front();
                mx=max(mx,front->val);
                q.pop();
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            ans.push_back(mx);
        }
        return ans;
    } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}