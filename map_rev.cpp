#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string , int> m;
    m["a"]=2;
    m["b"]=4;
    m["g"]=1;
    m["f"]=3;

    // map<string, int> :: iterator it;
    // for ( it=m.begin(); it != m.end(); ++it){
    //     cout<< it->first<<"  "<<it->second<<endl;
    // }

    for(auto &pr : m){
        cout<< pr.first <<"  "<<pr.second<<endl;
    }
   
    return 0;
}
