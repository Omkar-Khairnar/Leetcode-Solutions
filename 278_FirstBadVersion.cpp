#include <bits/stdc++.h>
 
using namespace std;
bool isBadVersion(int n){
    // This function will be API RFesult used in Que.
    return true;
}
int firstBadVersion(int n) {
  long long low=1, high=n, res;
    long long mid;
    while(low<=high){
        mid=(high+low)/2;
        if(!isBadVersion(mid)){
            low=mid+1;
        }
        else {
            res=mid;
            high=mid-1;
        }
        }
        return res;    
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}