// https://leetcode.com/problems/3sum/
#include <bits/stdc++.h>

using namespace std;


vector<vector<int>> threeSum(vector<int>& nums) {
    int target=0, val, start,end;
    vector<vector<int>> vec;
    vector<int> v;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {   val=target - nums[i];
        start=i+1;end=nums.size()-1;
        if(nums[i] != nums[i-1] && i!=0){
           while(start != end){
            if((nums[start] +nums[end])>val ){
                end--;
            }
            else if((nums[start] +nums[end])<val){
                start++;
            }
            else if((nums[start] +nums[end]) == val){
                    vec.push_back({nums[i], nums[start], nums[end]});
                  int last_low_occurence = nums[start] , last_high_occurence = nums[end];  
                   while(start < end && nums[start] == last_low_occurence){  
                        start++;
                    }
                    while(start < end && nums[end] == last_high_occurence){
                        end--;
                    }
            }
           }
            
        }
        else if(i==0)
        {
             while(start != end){
            if((nums[start] +nums[end])>val ){
                end--;
            }
            else if((nums[start] +nums[end])<val){
                start++;
            }
            else if((nums[start] +nums[end]) == val){
                    vec.push_back({nums[i], nums[start], nums[end]});
                  int last_low_occurence = nums[start] , last_high_occurence = nums[end];  
                   while(start < end && nums[start] == last_low_occurence){  
                        start++;
                    }
                    while(start < end && nums[end] == last_high_occurence){
                        end--;
                    } 
            }
           }
        }
        
        
    }
    
    return vec;
}

int main(int argc, char const *argv[])
{
 
    
    return 0;
}
