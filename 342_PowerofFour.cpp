#include <bits/stdc++.h>
 
using namespace std;
 bool isPowerOfFour(int n) {
   if(n <=0 || (n % 4 !=0 && n!=1)) return false;
   if (n==1)
   {
    return true;
   }
   return isPowerOfFour(n/4);      
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}