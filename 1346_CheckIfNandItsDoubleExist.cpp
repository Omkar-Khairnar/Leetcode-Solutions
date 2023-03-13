#include <bits/stdc++.h>
 
using namespace std;
  bool checkIfExist(vector<int>& arr) {
     unordered_set<int> st;
     for (int i = 0; i < arr.size(); i++)
     {
        if(arr[i]%2==0 && (st.count(arr[i]*2) || st.count(arr[i]/2))){
            return true;
        }
        else if(st.count(arr[i]*2)) return true;
        else st.insert(arr[i]);
     }
      return false;
    }

 
int main(int argc, char const *argv[])
{
 
  return 0;
}