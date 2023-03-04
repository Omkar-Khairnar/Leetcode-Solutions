#include <bits/stdc++.h>
 
using namespace std;
vector<vector<string>> ans;
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
void helper(vector<vector<int>>& board, int n, int r, string str){

    if(r ==n){
        vector<string> temp;
        for (int i = 0; i < n; i++)
        {
            temp.push_back(str);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
               {
                    if(board[i][j]==1){
                        temp[i][j]='Q';
                    }
               } 
        }  
        ans.push_back(temp);
        return; 
    }

    for (int i = 0; i < n; i++)
    {
       if(isSafe(board, r,i,n)){
           
            board[r][i]=1;
            helper(board, n,r+1, str);
            board[r][i]=0;
       }
    }

}
vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>> board(n,vector<int>(n,0));
        string str;
        for (int i = 0; i < n; i++)
        {
            str=str+".";
        }
        helper(board,n,0,str);
        return ans;
        
} 
 
int main(int argc, char const *argv[])
{
    vector<string> temp;
    temp.push_back("ABCD");
    temp[0][1]='p';
     cout<<temp[0][1]<<endl;
      string str;
        for (int i = 0; i < 4; i++)
        {
            str=str+".";
        }
        cout<<str<<endl;

 
  return 0;
}