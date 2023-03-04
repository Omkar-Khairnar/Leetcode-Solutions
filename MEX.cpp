#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> v;int val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        v.push_back(val); 
    }
    sort(v.begin(), v.end());
    
   val=0;
   for (int i = 0; i < n; i++)
   {
        if(!count(v.begin(), v.end(), val)){
            cout<<val<<endl;
            break;
        }
        else{
            val++;
        }
   }
   
    
    
 
  return 0;
}