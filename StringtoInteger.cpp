#include <bits/stdc++.h>
using namespace std;



    int myAtoi(string s) { 
    long long int sum=0, sumFrac=0;
    int ct=0, countSign=0; bool check=false;
    while (s[ct]==' ')
    {
       ct++;
    }
    while (s[ct] == '+' || s[ct] == '-')
    {   if(s[ct] == 45)
           {
            check=true;
           }
       ct++;
       countSign++;
    }
    if (countSign > 1 || (s[ct] > 57 || s[ct] <48))
    {
        return 0;
    }
    // 2.23s23
    int checkAlph=ct;
    for (int i = ct; i < s.length(); i++)
    {   
      if((s[i]>=48 && s[i]<=57) || s[i]=='.')
      { 
        if(i - checkAlph  >1){
          if(check)return -sum;
          return sum;
        }
        if(s[i] == '.'){
            checkAlph =i;
            sumFrac=sum;
            break;
        }
        if(sum > 2147483647)
        {
            if(check)return -2147483648;
          return 2147483647;
        }
        else{
            sum=sum*10+s[i]-48;
        checkAlph=i;
        }   
      }    
    }
 if(check){
            sum=-1*sum;
            sumFrac=-1*sumFrac;
        }
    if (sumFrac)
    {
        return sumFrac;
    }
    else
    {
        if(sum > 2147483647) return 2147483647;
        if(sum < -2147483648) return -2147483648;

     return sum;  
    }
}

int main()
{
    int c=5;
    if(c){
        cout<<c;
    }
    
    return 0;
}
