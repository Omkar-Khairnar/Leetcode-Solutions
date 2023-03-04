#include <bits/stdc++.h>
 
using namespace std;

bool isValid(string s) {
    int len=s.length();
    stack<char> st;
    
    for(auto i :s){
        if (i == '(' || i=='[' || i=='{') st.push(i);
        else{
            if (st.empty() || (i == ')' && st.top() !='(') || (i == ']' && st.top() !='[') || (i == '}' && st.top() !='{')  )
            {
                return false;
            }
            else st.pop();
        }
      
    }
    return st.empty();

} 
 
int main(int argc, char const *argv[])
{
  
    string s="({})[]";
    if (isValid(s))
    {
        cout << "YEs";
    }
    else{
        cout<<"NO";
    }
    // int a=s[0];
    // cout<<a;
    
    
  return 0;
}