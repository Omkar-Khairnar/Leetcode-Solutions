#include <bits/stdc++.h>
 
using namespace std;
int sum=0;
void helper(vector<int>& nums, vector<int>&temp,int n,int index){
    if(index ==n){
        if(!temp.size()){
            return;
        }
        int xr=temp[0];
        for (int i = 1; i < temp.size(); i++)
        {
            xr=xr^temp[i];
        }
        sum+=xr;
        return;
    }

    //Take comdition
    temp.push_back(nums[index]);
    helper(nums,temp, n,index+1);

    temp.pop_back();

    //Not Take Condition
    helper(nums,temp, n,index+1);


}
int subsetXORSum(vector<int>& nums) {
    vector<int> temp;
      helper(nums,temp,nums.size(),0);
      return sum;  
} 
 
int main(int argc, char const *argv[])
{
    int a= 4^6;
    cout<< a << endl;
  return 0;
}