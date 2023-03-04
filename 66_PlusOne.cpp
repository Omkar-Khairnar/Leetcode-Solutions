#include <bits/stdc++.h>
 
using namespace std;
 
 vector<int> plusOne(vector<int>& digits) {
       vector<int> ans;
       reverse(digits.begin(), digits.end());
       int i=1;
       int carry=0;

       if(digits[0] != 9){
            for(int n:digits){
                ans.push_back(n);
            }
            ans[0]+=1;
            reverse(ans.begin(), ans.end());
            return ans;
       }
       else{
            ans.push_back(0);
            carry=1;
            while (i < digits.size())
            {
                ans.push_back((digits[i]+carry)%10);
                if(digits[i]+carry > 9) carry=1;
                else carry=0;
                i++;
            }
            if(carry == 1) ans.push_back(carry);
            reverse(ans.begin(), ans.end());
            return ans;
            
       }
      

     return ans;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}