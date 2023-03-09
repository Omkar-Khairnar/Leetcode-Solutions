#include <bits/stdc++.h>
 
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
        if(letters[0]> target) return letters[0];
        else if(letters[letters.size()-1] < target) return letters[0];
        int low=0, high=letters.size()-1;
        int mid; char ans='A';
        while(low<=high){
           mid=(low+high)/2;
           if(letters[mid] > target){
            ans=letters[mid];
            high=mid-1;
           }
           else{
                low=mid+1;
           }
        } 

        return ans!='A' ? ans : letters[mid]==target ? letters[0] : letters[mid] ;
    } 
 
int main(int argc, char const *argv[])
{
 
  return 0;
}