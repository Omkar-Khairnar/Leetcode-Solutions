#include <bits/stdc++.h>
 
using namespace std;
bool isPerfectSquare(int num) {
    if(num  == 1) return true;
    int low=2;
    int high=num;
    int mid;
    while(low<=high){
        mid=(high+low)/2;
        if(mid*mid == num){
            return true;
        }
        else if( mid*mid > num){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return false;
} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}