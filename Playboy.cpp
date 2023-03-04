#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(int argc, char const *argv[])
{
    int t, val;
    cin >> t;
    int k=1, ans=1;

    for (int i = 0; i < t; i++)
    {   
        cin >> val;
        k=1, ans=1;
        while (k<=val)
        {
           ans=ans*k;
           k++;
        }
        cout<<ans;
    }
    
    
 
  return 0;
}