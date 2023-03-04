#include <bits/stdc++.h>
 
using namespace std;
int findContentChildren(vector<int>& g, vector<int>& s) {
  sort(g.begin(), g.end());
  sort(s.begin(), s.end());
  int i=0, index=0, ct=0;
  while (i< s.size() && index <g.size())
  {
   if(g[index]> s[i]){
    i++;
   }
   else{
    ct++;index++;i++;
   }
  }
   return ct; 
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}