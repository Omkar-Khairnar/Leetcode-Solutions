#include <bits/stdc++.h>
 
using namespace std;
 bool isFeasible(int A[],int N, int M, int mid){
    int ct=0; int sum=0;

    for (int i = 0; i < N; i++)
    {
        if(sum+ A[i] > mid){
            ct++;
            sum=A[i];
        }
        else
        {
            sum+=A[i];
        }
    }
    return (M > ct);
}
int findPages(int A[], int N, int M) 
 {
     int sum=0, mx=0;
     if(M > N) return -1;
     for (int i = 0; i < N; i++)
     {
        mx=max(A[i], mx);
        sum+=A[i];
     }

     int low=mx, high=sum, res=-1;
     int mid=0;
     while(low<=high){
        mid=(high+low)/2;

        if(isFeasible(A,N,M,mid)){
            res=mid;
            high=mid-1;
            
        }
        
        else{
            low=mid+1;
        }
     }
     return res;   
 } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}