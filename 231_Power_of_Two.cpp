#include <bits/stdc++.h>
 
using namespace std;
bool isPowerOfTwo(int n) {
   if(n <=0 || (n % 2 !=0 && n!=1)) return false;
   if (n==1)
   {
    return true;
   }
   return isPowerOfTwo(n/2);     
}
 
int main(int argc, char const *argv[])
{
    int a;
    cin >> a;
  return 0;
}