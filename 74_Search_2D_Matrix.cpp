#include <bits/stdc++.h>
 
using namespace std;
  bool searchNum(vector<int>&row,int target){
    int mid;
    int low=0, high=row.size()-1;
    while(low <=high){
        mid=(low+high)/2;

        if(row[mid] == target){
           return true;
        }
        else if(row[mid] > target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return false;
 }

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowSize=matrix[0].size()-1;
        for (int i = 0; i < matrix.size(); i++)
        {
            if(target <= matrix[i][rowSize]){
                return searchNum(matrix[i], target);
            }
        }
       return false; 
   } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}