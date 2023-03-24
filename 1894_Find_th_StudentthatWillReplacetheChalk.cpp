#include <bits/stdc++.h>
 
using namespace std;
 
int chalkReplacer(vector<int>& chalk, int k) {
        long long total=0;
       for(int i=0; i<chalk.size(); i++){
        total=total+chalk[i];
       }
        long long remain= k % total;
        if(k == total) return 0;
        if(k > total){
            for(int i=0; i< chalk.size(); i++){
                remain=remain-chalk[i];
                if(remain < 0){
                    return i;
                }
            }
        }
        else{
            for(int i=0; i<chalk.size(); i++){
                k=k-chalk[i];
                if(k <0){
                    return i;
                }
            }
        }
        return 0;

    } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}