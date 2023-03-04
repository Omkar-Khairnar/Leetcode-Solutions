#include <bits/stdc++.h>
 
using namespace std;
int maxProfit(vector<int>& prices) {
  int minval=prices[0], profit=0;
  for (int i =1; i <prices.size() ; i++)
  {
    profit= max(profit, prices[i] - minval);
    minval=min(minval, prices[i]);
  }

  if (profit <=0)
  {
    return 0;
  }
  else{
    return profit;
  }
  
  

} 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}