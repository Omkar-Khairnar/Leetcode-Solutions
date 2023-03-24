#include <bits/stdc++.h>
 
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0, prevIndex=0, index, ct=0, mn=INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            if(sum < target){
                sum+=nums[i];
                ct++;
            }

            else if(sum >= target){
                mn=min(mn, ct);
                sum-=nums[prevIndex];
                ct--;
                prevIndex++;
            }
        }
         while(sum >= target){
                mn=min(mn, ct);
                sum-=nums[prevIndex];
                ct--;
                prevIndex++;
        }
        return mn;
    } 

        int minSubArrayLen(int target, vector<int>& nums) {
            int sum=0, ct=0;
            sort(nums.begin(), nums.end());
            for(int i=nums.size()-1; i>=0; i--){
                sum+=nums[i];
                ct++;
                if(sum >= target){
                    return ct;
                }
            }
            return 0;
        }
 
int main(int argc, char const *argv[])
{
    // vector<int>v={1,2,3,4};
    // v.erase(v.begin()+2);
    // for(auto i:v){
    //     cout<<i;
    // }
 
  return 0;
}