#include <bits/stdc++.h>
 
using namespace std;
int guess(int n){
    //This Function was given in Que.
    return 0;
}
 int guessNumber(int n) {
    long long low=1, high=n, res;
    long long mid;
    while(low<=high){
        mid=(high + low)/2;
        if(guess(mid) == 0){
            return mid;
        }
        else if(guess(mid) == -1){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    
 }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}