#include <bits/stdc++.h>
 
using namespace std;
// int majorityElement(vector<int>& nums) {
//     int len=nums.size();
//     if(len == 1) return nums[0];
//     sort(nums.begin(), nums.end());
//     int ct=0, index=0, ct1=0, ans; 
//    for (int i = 0; i < len; i++)
//    {
//         if (nums[i] == nums[index])
//         {
//             ct++;
//             if (i == len-1 && ct > ct1 )
//             {
//               ans=nums[i-1];
//             }    
//         }
//         else{
//             index=i;
//             if (ct > ct1)
//             {
//                ct1=ct;
//                ans=nums[i-1];
//                --i;
//             }
//             ct=0;
            
//         }   
//    }
//     return ans;
// }

int majorityElement(vector<int>& nums) {
    int ele=0, ct=0;
    for(auto it: nums){
        if (ct == 0)
        {
           ele=it;
        }
        if(it == ele){
            ct++;
        }
        else{
            ct--;
        }
        
    }
    return ele;
}
 
int main(int argc, char const *argv[])
{
    vector<int> vec={2,2,1,1,1,2,2};
 cout << majorityElement(vec);
  return 0;
}