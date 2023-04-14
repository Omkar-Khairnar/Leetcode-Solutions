#include <bits/stdc++.h>
 
using namespace std;
 
   bool isUgly(int n) {
       if(n==0) return false;

       while(n>1){
        if(n % 2==0 && n%3==0 && n%5==0) n=n/30;
        else if(n % 3 ==0 && n%2==0) n=n/6;
        else if(n % 3 ==0 && n%5==0) n=n/15;
        else if(n % 5 ==0 && n%2==0) n=n/10;
        else if(n % 2 ==0) n=n/2;
        else if(n % 3 ==0) n=n/3;
        else if(n % 5 ==0) n=n/5;
        else break;
       } 

       return (n==1);
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}