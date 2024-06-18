class Solution {
public:
    int searchIndexLowerThanOrEqual(int target, int n, vector<vector<int>>&vec){
        int l=0, r=n-1, mid;

        while(l <= r){
            mid = (l+r)/2;
            if(vec[mid][0] > target){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }

        return r;
    }
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = profit.size();
        vector<vector<int>>vec;

        for(int i=0; i<n; i++){
            vec.push_back({difficulty[i], profit[i]});
        }

        sort(vec.begin(), vec.end());

        vector<int>maxProfit(n,0);
        int mx = 0;
        for(int i=0; i<n; i++){
            mx=max(mx, vec[i][1]);
            maxProfit[i]=mx;
        }

        int ans = 0;
        for(int i=0; i<worker.size(); i++){
            int ind = searchIndexLowerThanOrEqual(worker[i], n, vec);
            if(ind >= 0)ans += maxProfit[ind];
        }

        return ans;
    }
};
