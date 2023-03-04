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

  TreeNode *helper(vector<int>&nums, int low, int high){
    if(low>high ){
        return NULL;
    }

    int mid=low + (high-low)/2;
    TreeNode *temp=new TreeNode(nums[mid]);

    temp->left =helper(nums, low, mid-1);
    temp->right =helper(nums, mid+1, high);

    return temp;
  }

  TreeNode* sortedArrayToBST(vector<int>& nums) {
       return helper(nums, 0, nums.size()-1);
  } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}