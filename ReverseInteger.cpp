#include <bits/stdc++.h>
using namespace std;
 
 int toInteger(string str){

 }
  int reverse(int x) {
       long int ans=x;
         if(ans >=2147483647 || ans <= -2147483648 ){
             return 0;
         }
            if(x>0){
            string str=to_string(x);
            reverse(str.begin(), str.end());
            cout<<"A"+str<<endl;
            ans=stol(str);
            cout<<ans<<endl;
            if(ans > 2147483647) return 0;
            return ans;
            }
            else{
            string str=to_string(-1*x);
            reverse(str.begin(), str.end());
            cout<<"B"+str<<endl;
            ans=stol(str);
            if(-1*ans < -2147483648) return 0;
            return -1*ans;
            }


    }
    int reverse1(int x){
        int a, ct=0;
        long long int sum=0;
        if(x < 0) {
            ct=1;
            x=abs(x);
            }
        while (x>0)
        {
           a=x%10;
           sum=sum*10 +a;
           x=x/10;
        }
        if(sum > 2147483647) return 0;
        if(sum < -2147483647) return 0;

        if (ct > 0)
        {
           return -1*sum;
        }
        return sum;
        

    }

int main()
{
    // cout<<reverse(7468347412);
    int a=32;
    string str=to_string(a);
    reverse(str.begin(), str.end());
    a=stoi(str);
    cout<<reverse1(-352)<<endl;
    

    return 0;
}
