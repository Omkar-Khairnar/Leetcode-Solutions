#include <bits/stdc++.h>
 
using namespace std;
int trap(vector<int>& height) {
  int len=height.size();  
  int mx=height[0];
  int mn=height[len-1];
  int maxArr[len];
  int minArr[len];
  maxArr[0]=mx;
  minArr[len-1]=mn;

  for (int i = 1; i < len; i++)
  { 
        mx=max(mx,height[i]);
        maxArr[i]=mx;
  }
  
  for (int i = len-2; i >=0; i--)
  {
        mn=max(mn,height[i]);
        minArr[i]=mn;
  }
  int sum=0;
  for (int i = 0; i < len; i++)
  { cout<<maxArr[i]<<" "<<minArr[i]<<endl;
    sum+=abs(maxArr[i]-minArr[i]);
  }
  return sum- accumulate(height.begin(), height.end(),0);       
} 
 
int main(int argc, char const *argv[])
{
  vector<int> vec={0,1,0,2,1,0,1,3,2,1,2,1};

  cout<<trap(vec)<<endl;
  return 0;
}