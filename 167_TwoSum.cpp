#include <bits/stdc++.h>
 
using namespace std;
 
  vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int low=0, high=numbers.size()-1;
        while(low < high){
            if(numbers[low] + numbers[high] == target){
                ans.push_back(low+1);
                ans.push_back(high+1);
                break;
            }
            else if(numbers[low] + numbers[high] > target) high--;
            else low++;
        }
        return ans;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}