#include <bits/stdc++.h>
 
using namespace std;
string getHint(string secret, string guess) {
    int len=secret.length();
   int x=0, y=0;
   string str;
   for (int i = 0; i < len; i++)
   {
        if (secret[i] == guess[i])
        {
           x++;
           secret[i]='*';
           guess[i]='*';
        }
          
   }
    for (int i = 0; i < len; i++)
   {    int k=guess.find(secret[i]);
       if(k>=0 && secret[i] !='*') {
           y++; 
           guess[k]='*';
       }
   }

    str=to_string(x) + "A" +to_string(y) +"B";
   return str;
}
 
int main(int argc, char const *argv[])
{
  
  return 0;
}