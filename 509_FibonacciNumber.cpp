#include <bits/stdc++.h>
 
using namespace std;
//Recursive Approach
int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;

        return fib(n-2) + fib(n-1);
} 

//Iterative Approach
int fib(int n){
        int fa=0, fb=1, f=0;
        if(n==0) return fa;
        if(n==1) return fb;

        int i=2;
        while(i<=n){
            f=fa+fb;
            fa=fb;
            fb=f;
            i++;
        }

    return f;
}
 
int main(int argc, char const *argv[])
{
 
  return 0;
}