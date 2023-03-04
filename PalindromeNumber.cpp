#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
     bool check=false;
    string str=to_string(x);
    string str1=str;
    reverse(str.begin(), str.end());
    if(str1 == str){
        check=true;
    }
    return check;
        
}
int main(int argc, char const *argv[])
{
    
    return 0;
}
