#include <bits/stdc++.h>
 
using namespace std;
    int maxProduct(vector<int>& nums) {
       priority_queue<int, vector<int>, greater<int>>pq;
       pq.push(nums[0]);
       pq.push(nums[1]);    
       for(int i=2; i<nums.size(); i++){
           if(nums[i]> pq.top()){
               pq.pop();
               pq.push(nums[i]);
           }
       }

       int a;
       a=pq.top(); pq.pop();
       return (pq.top()-1)*(a-1);
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}