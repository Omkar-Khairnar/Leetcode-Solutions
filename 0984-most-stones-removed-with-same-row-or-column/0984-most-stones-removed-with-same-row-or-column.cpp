class Solution {
public:
    void dfs(int idx, unordered_map<int,vector<int>>&row, unordered_map<int,vector<int>>&col, vector<int>&vis, vector<vector<int>>& stones){
        vis[idx] = 1;
        for(int u: row[stones[idx][0]]){
            if(vis[u] == 0){
                dfs(u, row, col, vis, stones);
            }
        }
        for(int u: col[stones[idx][1]]){
            if(vis[u] == 0){
                dfs(u, row, col, vis, stones);
            }
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        unordered_map<int, vector<int>>row;
        unordered_map<int, vector<int>>col;
        for(int i=0; i<n; i++){
            row[stones[i][0]].push_back(i);
            col[stones[i][1]].push_back(i);
        }

        int ct = 0;
        vector<int>vis(n,0);
        for(int i=0; i<n; i++){
            if(vis[i] == 0){
                dfs(i, row, col, vis, stones);
                ct++;
            }
        }

        return n-ct;
    }
};