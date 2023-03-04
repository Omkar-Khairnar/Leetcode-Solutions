#include <bits/stdc++.h>
 
using namespace std;
int mySqrt(int x) {
    if(x==0) return 0;
    int low=0, high=x, mid=0, ans=0;
    while (low < high)
    {
      mid= (low +(high-low))/2;
      if (mid * mid ==x) return mid;
      else if(mid * mid > x) {
        high= mid-1;
        ans=mid;
      }
      else low= mid+1;
    }
    
    return ans;
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}