#include <bits/stdc++.h>
 
using namespace std;

 int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
       sort(arr2.begin(), arr2.end());
    int low, high,mid,ct=0, min,max;
    int len=arr2.size()-1;
       for (int i = 0; i < arr1.size(); i++)
       {    
            min=arr1[i]-d;max=arr1[i]+d;
            low=0; high=len;
            while(low<=high){
              mid=(low+high)/2;

              if(arr2[mid]<=max && arr2[mid]>=min){
                ct++; break;
              }
              else if(arr2[mid] > max){
                high=mid-1;
              }
              else{
                low=mid+1;
              }
            }
       }
       return arr1.size()-ct;
    } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}