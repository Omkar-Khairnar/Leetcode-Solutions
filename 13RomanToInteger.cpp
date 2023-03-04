#include <bits/stdc++.h>
 
using namespace std;
  int romanToInt(string s) {
    int sum=0;
    map<char, int> m;
    m['I']=1;
    m['V']=5;
    m['X']=10;
    m['L']=50;
    m['C']=100;
    m['D']=500;
    m['M']=1000;

    // sum=m[s[0]];
    for (int i = 0; i < s.length(); i++)
    {
       if (m[s[i]] >= m[s[i+1]])
       {
        sum+=m[s[i]];
       }
       else{
        sum+=m[s[i+1]] - m[s[i]];
        i++;
       }
        
    }
    
    return sum;    
  }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}