class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long reqFlowers = (long long)m*k;
        int n = bloomDay.size();
        if(n < reqFlowers) return -1;

        int maxi = 0;
        for(int u:bloomDay) maxi=max(maxi,u);

        int low = 1, high = maxi, mid;
        while(low <= high){
            mid = (low + high)/2;
            int temp = 0;
            int bouquets = 0;
            for(int i=0; i<n; i++){
                if(bloomDay[i] <= mid) temp++;
                else{
                    bouquets += temp/k;
                    temp = 0;
                }
            }
            bouquets += temp/k;
            if(bouquets < m){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};
