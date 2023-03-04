#include <bits/stdc++.h>
 
using namespace std;
int tribonacci(int n) {
       int fa=0, fb=1,fc=1, f=0;
        if(n==0) return fa;
        if(n==1) return fb;  
        if(n==2) return fc;  

        int i=3;
        while(i<=n){
            f=fa+fb+fc;
            fa=fb;
            fb=fc;
            fc=f;
            i++;
        }

        return f;
}
 
int main(int argc, char const *argv[])
{
 
  return 0;
}