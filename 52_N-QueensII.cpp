#include <bits/stdc++.h>
 
using namespace std;
int ct=0;


bool isSafe(vector<vector<int>>& board, int r, int c, int n){
    for (int i = 0; i < r; i++)
    {
        if(board[i][c]==1){
            
            return false;
        }
    }
    
    for(int i=r-1, j=c-1; i>=0 && j>=0; i--,j--){
        if(board[i][j]==1){
            return false;
        }
    }
    for(int i=r-1, j=c+1; i>=0 && j<n; i--,j++){
        if(board[i][j]==1){
            return false;
        }
    }
    return true;
}
void helper(vector<vector<int>>& board, int n, int r){

    if(r ==n){
        ct++;
        return; 
    }

    for (int i = 0; i < n; i++)
    {
       if(isSafe(board, r,i,n)){
           
            board[r][i]=1;
            helper(board, n,r+1);
            board[r][i]=0;
       }
    }

}
   int totalNQueens(int n) {
        vector<vector<int>> board(n,vector<int>(n,0));
       
        helper(board,n,0);
        return ct;
        
}


 
int main(int argc, char const *argv[])
{
 
  return 0;
}