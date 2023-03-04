#include <bits/stdc++.h>
 
using namespace std;

//--> SOLUTION USING RECURSION
// int ct=0;
// void helper(string s,string t, string temp, int index){
//    if(index== s.length()){
//     cout<<temp<<endl;
//     if(temp.compare(t) == 0){
//         ct++;
//     }
//    }

//    //Take condition 
//    helper(s, t, temp+s[index],index+1);

//    //Not Take Condition
//    helper(s, t, temp+s[index],index+1);

//    return;
    
// }

// int numDistinct(string s, string t) {
//     helper(s,t,"",0);
//     return ct;
// } 


//--> SOLUTION USING DYNAMIC PROGRAMMING


int dp[1005][1005];
int ok(int i, int j, string s, string t){
    int n=s.length();
    int m=t.length();

    if(j==m) return 1;
    if(i == n) return 0;
    if(dp[i][j] !=-1) return dp[i][j];

    int total=0;
    if(s[i]==t[j]) total=ok(i+1,j+1,s,t)+ok(i+1, j, s,t);
    else total=ok(i+1,j,s,t);
    dp[i][j]=total;
    return total;

}

int numDistinct(string s, string t) {
    memset(dp,-1,sizeof(dp));
    return ok(0,0,s,t);
}
int main(int argc, char const *argv[])
{
 
  return 0;
}