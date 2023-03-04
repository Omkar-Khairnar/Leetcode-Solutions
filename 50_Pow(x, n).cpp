#include <bits/stdc++.h>
 
using namespace std;
double myPow(double x, int n) {
    // double val=x, at=x,ct=0;
    // if(n == 0) return 1;
    // if (n > 1)
    // {
    //     while (n>1)
    //     {
    //        if( n% 2 !=0) ct++;
    //        else x=x*x;
    //        n=n/2;
    //     }
    //     while (ct>0)
    //     {
    //         x=x*val;
    //     }
        
    //     return x;
    // }
    // else{
    //     while (n<=-1)
    //     {
    //        if( n% 2 !=0) ct++;
    //        else at=at*at;
    //        n=n/2;
    //     }
    //     while (ct > 0)
    //     {
    //         at=at*val;
    //     }
        
    //     return val/at;
    // }
    
   
    return pow(x,n);
} 
 
int main(int argc, char const *argv[])
{
    cout<<myPow(2,5)<<endl;
  return 0;
}