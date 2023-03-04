#include <bits/stdc++.h>
 
using namespace std;
int strStr(string haystack, string needle) {
   size_t found=haystack.find(needle);
   if (found != string::npos)
   {
    return found;
   }
    return -1;    
}
 
int main(int argc, char const *argv[])
{
 
  return 0;
}