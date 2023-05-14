#include <bits/stdc++.h>
 
using namespace std;
int climbStairs(int n) {
   int prev2=1, prev=2;
   if(n==1) return 1;
   if(n==2) return 2;
   int ans;
   for(int i=3; i<=n; i++){
      ans=prev+prev2;
      prev2=prev;
      prev=ans;
   }
   return ans;
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}