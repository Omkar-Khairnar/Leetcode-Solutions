#define ll long long
class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        int n = nums.size();
        vector<ll>dp(n,0);
        stack<int>st;
        st.push(0);
        for(int i=1; i<n; i++){
            ll maxi = 0;
            while(!st.empty() && nums[i] > nums[st.top()]){
                maxi = max(maxi, ((ll)(i-st.top()) * nums[st.top()]) + dp[st.top()]);
                st.pop();
            }

            dp[i] = maxi;
            st.push(i);
        }

        while(!st.empty()){
            dp[n-1] = max(dp[n-1], (ll)(n-1-st.top())*nums[st.top()] + dp[st.top()]);
            st.pop();
        }


        return dp[n-1];
    }
};