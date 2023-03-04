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

//   map<int,set<pair<int,int>>> mp;
//   pair<int, int> pr;
//   void verticalTraverse(TreeNode*root, int row, int col){
//     if(!root) return;
//     pr={row,root->val};
//     mp[col].insert(pr);
//     verticalTraverse(root->left, row+1, col-1);
//     verticalTraverse(root->right, row+1, col+1);
//   }
//   vector<vector<int>> verticalTraversal(TreeNode* root) {
//        vector<vector<int>> ans;
//         vector<int> colval;
//         vector<int>order;
//         set<pair<int,int>> st;
//        for(auto it=mp.begin(); it !=mp.end(); it++){
//             st=it->second;
//             auto jt=st.begin();
//             while(jt !=st.end()){
//                 int val=jt->second;
//                 order.push_back(val);
               
//                 int itr=jt->first;
//                  jt++;
//                 while(jt !=st.end() && jt->first == itr){
//                     order.push_back(jt->second);
//                     jt++;
//                 }
               
//                 sort(order.begin(), order.end());
//                 for(auto em:order){
//                     colval.push_back(em);
//                 }
//                 order.clear();
//             }
//             ans.push_back(colval);
//             colval.clear();
//         }
//         return ans;
//     }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}