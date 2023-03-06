#include <bits/stdc++.h>
 
using namespace std;
 
 int findKthPositive(vector<int>& arr, int k) {
     int sum=0;
     if(k < arr[0]) return k;
     if(arr[0] >1) sum+=arr[0]-1;

     for(int i=1; i< arr.size(); i++){
        if(arr[i]-arr[i-1] >1){
            sum+=arr[i]-arr[i-1]-1;
        }
        if(sum == k){
            return arr[i]-1;
        }
        else if(sum > k){
            int val=arr[i];
            while(sum !=k){
                val--; sum--;
            }
            return --val;
        }

     }
     return (k-sum+arr[arr.size()-1]);   
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}