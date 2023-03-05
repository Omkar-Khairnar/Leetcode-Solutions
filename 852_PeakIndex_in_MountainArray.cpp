#include <bits/stdc++.h>
 
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
        int low=0, high=arr.size(), mid=0;

        while(low<=high){
            mid=low + (high-low)/2;
            if(arr[mid] >arr[mid+1] && arr[mid]>arr[mid-1]){
                return mid;
            }
            else if(arr[mid] > arr[mid+1] && arr[mid] <arr[mid-1]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}