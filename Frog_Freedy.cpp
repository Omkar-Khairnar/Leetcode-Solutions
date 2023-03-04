#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(int argc, char const *argv[])
{
    int N, M;
    cin >> N; cin >> M;
    string str;
    cin>> str;
    int x,y;
    int prevx, prevy;
     cin>>x; cin>>y;
  
     prevx=x;prevy=y;
    int i=1 , index=0;
    while (i< N && index <M)
    {
        
        cin>>x; cin>>y;
         if (str[index] == 'A')
       {
            if ((x- prevx)>0 && (y-prevy)>0 && ((x- prevx)==(y-prevy)) ) 
            {
              i++; index++;
            }
            else
            {   
              cout<<prevx<<" "<<prevy<<endl;
            // ansx=prevx; ansy=prevy;
              
              break;
            }   
       }
        else if (str[index] == 'B')
       {
            if ((x- prevx)>0 && (y-prevy)<0 && ((x- prevx)== -1*(y-prevy)) ) 
            {
              i++; index++;
            }
            else
            {   
              cout<<prevx<<" "<<prevy<<endl;
            // ansx=prevx; ansy=prevy;
           
              break;
            }   
       }
        else if (str[index] == 'C')
       {
            if ((x- prevx)<0 && (y-prevy)>0 && (-1*(x- prevx)== (y-prevy)) ) 
            {
              i++; index++;
            }
            else
            {   
              cout<<prevx<<" "<<prevy<<endl;
            // ansx=prevx; ansy=prevy;
             
              break;
            }   
       }
        else if (str[index] == 'D')
       {
            if ((x- prevx)<0 && (y-prevy)<0 && ((x- prevx)== (y-prevy)) ) 
            {
              i++; index++;
            }
            else
            {   
              cout<<prevx<<" "<<prevy<<endl;
            // ansx=prevx; ansy=prevy;
             
              break;
            }   
       }
       prevx=x; prevy=y;

    }

//    cout<<ansx<<" "<<ansy<<endl;


    
   
     




    
 
  return 0;
}