#include <bits/stdc++.h>
 
using namespace std;

string alphabetBoardPath(string target) {
    map<char, pair<int,int>> m;
    int row=0, col=0,ct=0;
    int val=97;
   while( val<=122){
    if(ct ==5){
        row++; col=0; ct=0;
    }
        m[val]={row, col};
        val++; col++; 
        ct++;
   }
    int r=0, c=0;
    string ans;
    pair<int, int> currPos;
   for(int i=0; i<target.length(); i++)
   {
        currPos=m[target[i]];
        for ( int j = 0; j <(c -currPos.second ); j++)
        {
           ans=ans+'L';
        }
         for ( int j = 0; j <(r - currPos.first); j++)
        {
           ans=ans+'U';
        }
         for ( int j = 0; j <(currPos.first - r); j++)
        {
           ans=ans+'D';
        }
           for ( int j = 0; j <(currPos.second - c); j++)
        {
           ans=ans+'R';
        } 
        ans=ans +'!';
        r=currPos.first; c=currPos.second; 
   }
   return ans;
}
//Efficient Solution
string alphabetBoardPath(string target, int x = 0, int y = 0) {
  string res;
  for (auto ch : target) {
    int x1 = (ch - 'a') % 5, y1 = (ch - 'a') / 5;
    res += string(max(0, y - y1), 'U') + string(max(0, x1 - x), 'R') +
      string(max(0, x - x1), 'L') + string(max(0, y1 - y), 'D') + "!";
    x = x1, y = y1;
  }
  return res;
}
 
int main(int argc, char const *argv[])
{
  return 0;
}