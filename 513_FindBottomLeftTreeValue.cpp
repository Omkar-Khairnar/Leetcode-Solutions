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

  int findBottomLeftValue(TreeNode* root) {
        int ans;
        queue<TreeNode*> q;
        q.push(root);
        int sz=-1;
        while (!q.empty())
        {
            sz=q.size();
            ans=q.front()->val;
            while(sz--){
                TreeNode* front=q.front();
                q.pop();
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
        }
        return ans;
        
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}