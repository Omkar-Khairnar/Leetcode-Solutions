class Solution {
public:
    int fun(int idx, vector<vector<int>>& books, int shelfWidth, vector<int>&dp){
        //base Case
        if(idx >= books.size()) return 0;

        if(dp[idx] != -1) return dp[idx];
        int height = INT_MIN;
        int currWidth = 0;
        int ans = INT_MAX;
        for(int i=idx; i<books.size(); i++){
            if(currWidth + books[i][0] <= shelfWidth){
                height = max(height, books[i][1]);
                currWidth += books[i][0];
                int val = fun(i+1, books, shelfWidth, dp);
                if(val < INT_MAX) ans = min(ans, height+val);
            }
            else break;
        }

        return dp[idx] = ans;

    }
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        int n = books.size();
        vector<int>dp(n+1,-1);
        return fun(0, books, shelfWidth, dp);
    }
};