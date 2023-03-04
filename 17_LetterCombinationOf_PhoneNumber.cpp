#include <bits/stdc++.h>
 
using namespace std;

vector<string> ans;
string chooseString(char ch){
string map[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

  return map[ch-48];
}
void helper( string digits,string temp){
    if(digits.length()==0){
      ans.push_back(temp);
      return;
    }
    string str=chooseString(digits[0]);

    digits.erase(0,1);

    for (int  i = 0; i < str.length(); i++)
    {
        helper(digits, temp+str[i]);
    }   
}

vector<string> letterCombinations(string digits) {
   if(!digits.length()){
         return ans;  
     }
      helper(digits, "");

      return ans;  
}

int main(int argc, char const *argv[])
{
 
  return 0;
}