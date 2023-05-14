#include <bits/stdc++.h>
 
using namespace std;
 string addBinary(string a, string b) {
        int carry=0;
        // int len=max(a.length(), b.length());
        int l1=a.length();
        int l2=b.length();
        string ans="";
        int arr1[l1], arr2[l2];
        for(int i=l1-1; i>=0; i--){
            arr1[i]=a[i]-48;
        }
        for(int i=l2-1; i>=0; i--){
            arr2[i]=b[i]-48;
        }
        int idx1=l1-1, idx2=l2-1;
        int sum=0;
        if(l1>=l2){
            while(idx2>=0){
                sum=arr1[idx1]+arr2[idx2]+carry;
                if(sum==2){
                    carry=1;
                    ans+="0";
                }
                else if(sum==1){
                    carry=0;
                    ans+="1";
                }
                else if(sum==0){
                    carry=0;
                    ans+="0";
                }
                else{
                    carry=1;
                    ans+="1";
                }
                idx2--;idx1--;
            }

            while(idx1>=0){
                sum=arr1[idx1]+carry;
                if(sum==0){
                    ans+="0";
                    carry=0;
                }
                else if(sum==1){
                    ans+="1"; carry=0;
                }
                else{
                    ans+="0"; carry=1;
                }
                idx1--;
            }
            if(carry) ans+="1";
        }
        else{
            while(idx1>=0){
                sum=arr1[idx1]+arr2[idx2]+carry;
                if(sum==2){
                    carry=1;
                    ans+="0";
                }
                else if(sum==1){
                    carry=0;
                    ans+="1";
                }
                else if(sum==0){
                    carry=0;
                    ans+="0";
                }
                else{
                    carry=1;
                    ans+="1";
                }
                idx2--;idx1--;
            }

            while(idx2>=0){
                sum=arr2[idx2]+carry;
                if(sum==0){
                    ans+="0";
                    carry=0;
                }
                else if(sum==1){
                    ans+="1"; carry=0;
                }
                else{
                    ans+="0"; carry=1;
                }
                idx2--;
            }
            if(carry) ans+="1";
        }


        reverse(ans.begin(), ans.end());
        return ans;  
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}