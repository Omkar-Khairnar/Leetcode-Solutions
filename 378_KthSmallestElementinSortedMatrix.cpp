#include <bits/stdc++.h>
 
using namespace std;
 
//  int kthSmallest(vector<vector<int>>& matrix, int k) {
//         int n=matrix.size();
//         priority_queue<int>pq;
//         for(int i=0; i< n; i++){
//             for(int j=0; j< n; j++){
//                 if(k>0){
//                     pq.push(matrix[i][j]);
//                     k--;
//                 }
//                 else{
//                     if(matrix[i][j] < pq.top()){
//                         pq.pop();
//                         pq.push(matrix[i][j]);
//                     }
//                 }
//             }
//         }
//         return pq.top();
//     }

int countNumbers(vector<vector<int>>&matrix, int target){
   int n = matrix.size(), i = n - 1, j = 0, cnt = 0;
        while (i >= 0 && j < n) {
            if (matrix[i][j] > target) {
                i--;
            } else {
                cnt += i + 1;
                j++;
            }
        }
        
        return cnt;
}

int kthSmallest(vector<vector<int>>& matrix, int k) {
    int n=matrix.size();
    int low=matrix[0][0], high=matrix[n-1][n-1], mid;
    int num,ans=-1;
    while(low <=high){
        mid=(low+high)/2;
        num=countNumbers(matrix,mid);
        if(mid <k ){
            low=mid+1;
        }
        else{
            ans=mid;
            high=mid-1;
        }
    }
    return ans;
}


 
int main(int argc, char const *argv[])
{
 
  return 0;
}