#include <bits/stdc++.h>
 
using namespace std;
bool isSubsequence(string s, string t) {
    int a=s.length();    
    int b=t.length();    
    if (a > b) return false;
    int index=0, i=0;
    while (index < a && i <b)
    {
       if (t[i] == s[index])
       {
        index++; i++;
       }
       else i++;
    }
    
    if(index == a-1) return true;
    else return false;
    
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}