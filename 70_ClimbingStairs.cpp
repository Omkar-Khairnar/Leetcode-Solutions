#include <bits/stdc++.h>
 
using namespace std;
int climbStairs(int n) {
    vector<int> table;
     for (int i = 0; i <= n; i++)
     {
        if(i==0 || i == 1 || i==2) table.push_back(i);
          table.push_back(table[i-1]+table[i-2]);
     }
     
    return table[n];
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}