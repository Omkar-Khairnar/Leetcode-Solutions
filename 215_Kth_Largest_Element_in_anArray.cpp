#include <bits/stdc++.h>
 
using namespace std;
    
 int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;

        for(int i=0; i<k; i++){
            pq.push(nums[i]);
        }

        for(int i=k; i<nums.size(); i++){
            if(nums[i] < pq.top()){
                continue;
            }
            else{
                pq.pop();
                pq.push(nums[i]);
            }
        }

        return pq.top();
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}