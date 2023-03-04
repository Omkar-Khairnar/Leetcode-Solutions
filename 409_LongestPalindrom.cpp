#include <bits/stdc++.h>
 
using namespace std;
int longestPalindrome(string s) {
        map<char, int> map;
        int even=0, odd=0;
        for (int i = 0; i < s.length(); i++)
        {
            map[s[i]]++;
        }
        for(auto it : map){
            if(it.second % 2 ==0) even+=it.second;
            else if( it.second % 2 !=0) {
                even+=it.second-1;
                odd++;
            }
        }
    if(odd>0){
        return even +1;
    }
    else{
        return even;
    }
     
} 
 
int main(int argc, char const *argv[])
{
 longestPalindrome("Omkara");
  return 0;
}