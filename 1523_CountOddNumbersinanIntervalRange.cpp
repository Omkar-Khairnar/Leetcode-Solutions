#include <bits/stdc++.h>
 
using namespace std;
int countOdds(int low, int high) {
    int ct=0;
    if(low % 2 !=0) ct++;
    if(low % 2 !=0) {
        ct = ct + (high -low -1)/2;
    }
    if(low % 2 ==0) {
        ct = ct +1+ (high -low -1)/2;
    }
    if(high % 2 !=0) ct++;
    return ct;
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}