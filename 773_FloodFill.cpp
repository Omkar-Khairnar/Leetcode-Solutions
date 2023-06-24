#include <bits/stdc++.h>
 
using namespace std;
  vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val=image[sr][sc];
        if(val==color) return image;
        int m=image.size();
        int n=image[0].size();
        queue<pair<int,int>>q;
        q.push({sr,sc});
        image[sr][sc]=color;
        //[0,0,1]
        //[0,1,1]
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();

            if(r-1 >=0 && image[r-1][c]==val){
                image[r-1][c]=color;
                q.push({r-1,c});
            }
            if(c-1 >=0 && image[r][c-1]==val){
                image[r][c-1]=color;
                q.push({r,c-1});
            }
            if(r+1 <m && image[r+1][c]==val){
                 image[r+1][c]=color;
                 q.push({r+1,c});
            }
            if(c+1 <n && image[r][c+1]==val){
                image[r][c+1]=color;
                q.push({r,c+1});
            }

        }
        return image;
    }
 
int main(int argc, char const *argv[])
{
 
  return 0;
}