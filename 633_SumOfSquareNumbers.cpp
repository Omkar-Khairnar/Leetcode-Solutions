#include <bits/stdc++.h>
 
using namespace std;
bool judgeSquareSum(int c) {
     for(long long a=0; a*a<=c; a++) {
            double b = sqrt(c-(a*a));
            if(b==int(b)){
               return true;
            }
        }
        return false;
      
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}