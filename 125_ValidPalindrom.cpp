#include <bits/stdc++.h>
 
using namespace std;
bool isPalindrome(string s) {
   transform(s.begin(), s.end(), s.begin() , ::tolower);
    int i=0, j=s.length()-1;
    // string rev=s;
    // reverse(s.begin(), s.end());

   while (i <=j)
   {
        if (!((s[i]>=97 && s[i] <=122) || (s[i]>=48 && s[i] <=57)))
        {
           i++;
        }
        if (!((s[j]>=97 && s[j] <=122) || (s[j]>=48 && s[j] <=57)))
        {
           j--;
        }
        if (s[i] != s[j])
        {
           return false;
        }
        else
        {
            i++; j--;
        }    
   }
   
    return true;
}
 
int main(int argc, char const *argv[])
{
 string my_str = "Hello WORLD";

   cout << "Main string: " << my_str << endl;
   transform(my_str.begin(), my_str.end(), my_str.begin(), ::tolower);

   cout << "Converted String: " << my_str;
  return 0;
}