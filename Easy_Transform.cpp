#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int val;
    int odd=0, even=0;

    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        vec.push_back(val);
        if(val % 2==0) even++;
        else odd++;
    }

    int ans= (odd >= even) ? even : odd;
    if( even == 0 || odd ==0){
        cout<< 0;
    }
    else
    {
        cout<<ans;
    }
    



    


 
  return 0;
}