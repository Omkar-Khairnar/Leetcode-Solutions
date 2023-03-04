#include <bits/stdc++.h>
 
using namespace std;


// vector<int> vec;
// //Recursive Approach But it is Time consuming
// void helper(string str,  int index, int n){
//     if(index == n){
//         stringstream geek(str);
//         int num=0;
//         geek>>num;
//         vec.push_back(num);
//     }

//    else{
//     for (int i = index; i <= n-1; i++)
//     {
//         swap(str[index], str[i]);
//         helper(str, index+1, n );
//         swap(str[index], str[i]);
//     }
    
//    }
// }
// string getPermutation(int n, int k) {
//     string str;
//     for (int  i = 1; i <= n; i++)
//     {
//         str=str+to_string(i);
//     }
//     helper(str, 0, n);
//     sort(vec.begin(), vec.end());
//     return to_string(vec[k-1]);     
// } 



//Efficient Approach to question
string str="";
void helper(int n, int k, vector<int>&fact, vector<char>&digit){
    if(n==1){
        str+=digit[0];
        return;
    }
    int block_size=fact[n-2];

    int index=k/block_size;
    if(k % block_size ==0) index--;
    str+=digit[index];
    auto it=digit.begin();
    for(int i=0; i<index; i++) it++;
    digit.erase(it);
    k=k-index*block_size;
    n--;
    helper(n,k,fact,digit);

}
string getPermutation(int n, int k) {
    vector<int> fact={1,1,2,6,24,120,720,5040,40320,362880};
    vector<char> digit;

    for(int i=1; i<=n; i++){
        digit.push_back(i+48);
    }
    return str;
}
 
int main(int argc, char const *argv[])
{
 
  return 0;
}