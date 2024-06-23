class Solution {
public:
    int fun(int idx, int k, bool canBuy, vector<int>&prices, vector<vector<vector<int>>>&dp){
        if(k<= 0 || idx == prices.size()){
            return 0;
        }


        if(dp[idx][canBuy][k] != -1) return dp[idx][canBuy][k];

        if(canBuy){
            int take = -prices[idx] + fun(idx+1, k, !canBuy, prices, dp);
            int notTake = fun(idx+1, k, canBuy, prices, dp);
            return dp[idx][canBuy][k] = max(take, notTake);
        }
        else{
            int sell = prices[idx] + fun(idx+1, k-1, !canBuy, prices, dp);
            int notSell = fun(idx+1, k, canBuy, prices, dp);
            return dp[idx][canBuy][k] = max(sell, notSell);
        }

    }
    int maxProfit(int k, vector<int>& prices) {
//Memoization Solution        
        int n=prices.size();
        vector<vector<vector<int>>>dp(n, vector<vector<int>>(2,vector<int>(k+1,-1)));
        return fun(0, k, 1, prices,dp);

//Tabulation Solution
        // vector<vector<vector<int>>>dp(n+1, vector<vector<int>>(2,vector<int>(k+1,0)));
        // for(int idx=n-1; idx>=0; idx--){
        //     for(int buy=0; buy<=1; buy++){
        //         for(int cap=1; cap<=k; cap++){
        //              if(buy){
        //                 int take=-prices[idx]+dp[idx+1][0][cap];
        //                 int notTake=dp[idx+1][1][cap];
        //                 dp[idx][buy][cap]=max(take,notTake);
        //             }
        //             else{
        //                 int sell=prices[idx]+dp[idx+1][1][cap-1];;
        //                 int notSell=dp[idx+1][0][cap];
        //                  dp[idx][buy][cap]=max(sell,notSell);
        //             }
        //         }
        //     }
        // }
        // return dp[0][1][2];


//Space Optimization
        // vector<vector<int>>ahead(2,vector<int>(k+1,0)),curr(2,vector<int>(k+1,0));
        //   for(int idx=n-1; idx>=0; idx--){
        //     for(int buy=0; buy<=1; buy++){
        //         for(int cap=1; cap<=k; cap++){
        //              if(buy){
        //                 int take=-prices[idx]+ahead[0][cap];
        //                 int notTake=ahead[1][cap];
        //                 curr[buy][cap]=max(take,notTake);
        //             }
        //             else{
        //                 int sell=prices[idx]+ahead[1][cap-1];;
        //                 int notSell=ahead[0][cap];
        //                  curr[buy][cap]=max(sell,notSell);
        //             }
        //         }
        //     }
        //     ahead=curr;
        // }

        // return ahead[1][k];        
    }
};