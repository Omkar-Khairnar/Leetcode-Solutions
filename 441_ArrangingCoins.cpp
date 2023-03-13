#include <bits/stdc++.h>
 
using namespace std;
 
 int arrangeCoins(int n) {
    if(n==1) return 1;
     int low=1, high=n, mid=-1;
     int ans=-1;
     while(low <= high){
        mid=(low+high)/2;

        if( n /((mid*(mid+1))/2) >= 1){
           ans=mid;
           low=mid+1;
        }
        else{
            high = mid-1;
        }
     }
     return ans;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}