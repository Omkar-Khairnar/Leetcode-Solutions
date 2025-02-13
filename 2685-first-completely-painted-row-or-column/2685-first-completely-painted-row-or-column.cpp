class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int>rowCt(m, 0);
        vector<int>colCt(n, 0);

        unordered_map<int, pair<int, int>>mp;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                mp[mat[i][j]]={i, j};
            }
        }

        for(int i=0; i<arr.size(); i++){
            int x = mp[arr[i]].first;
            int y = mp[arr[i]].second;
            rowCt[x]++;
            colCt[y]++;
            if(rowCt[x] == n || colCt[y]==m){
                return i;
            }
        }

        return 0;
    }
};