#include <bits/stdc++.h>
 
using namespace std;
 
//  int searchNegative(vector<int>&row, int low, int high){
//     int mid;
//     while(low <=high){
//         mid=(low+high)/2;

//         if(row[mid] >= 0){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     return high;
//  }


    int countNegatives(vector<vector<int>>& grid) {
        int sum=0, val;
        int rowSize=grid[0].size()-1;
        int low , high=rowSize, prev;
        for (int  i = 0; i < grid.size(); i++)
        {
           int j=high;
           int ct=0;
           while (grid[i][j] < 0)
           {
                j--;
                ct++;
           }
           
            sum+=ct*(grid.size() - i);
            high=j;
        }
        return sum;
    }


 
int main(int argc, char const *argv[])
{
 
  return 0;
}