#include <bits/stdc++.h>
 
using namespace std;
 
 vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int> ans;
         int left=0, right=matrix[0].size()-1;
         int top=0, bottom=matrix.size()-1;
         char ch1='r';
         
         int idx=0;
         while(top<=bottom && left<=right){
             if(ch1 == 'r'){
                 ans.push_back(matrix[top][idx]);
                //  cout<<matrix[top][idx]<<" ";
                //  cout<<"hi"<<endl;
                 idx++;
                 if(idx==right+1){
                     ch1='d';
                     top++;
                     idx=top;
                 }
             }
             else if(ch1=='d'){
                 ans.push_back(matrix[idx][right]);
                //  cout<<matrix[idx][right]<<" ";
                 idx++;
                 if(idx==bottom+1){
                     ch1='l';
                     right--;
                     idx=right;
                 }
             }
             else if(ch1=='l'){
                 ans.push_back(matrix[bottom][idx]);
                //  cout<<matrix[bottom][idx]<<" ";
                 idx--;
                 if(idx==left-1){
                     ch1='u';
                     bottom--;
                     idx=bottom;
                 }
             }
             else if(ch1=='u'){
                 ans.push_back(matrix[idx][left]);
                //  cout<<matrix[idx][left]<<" ";
                 idx--;
                 if(idx==top-1){
                     ch1='r';
                     left++;
                     idx=left;
                 }
             }
         }
         return ans;
    }
int main(int argc, char const *argv[])
{
 
  return 0;
}