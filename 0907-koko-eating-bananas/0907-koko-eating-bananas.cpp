class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int l=1, r=piles[n-1], mid;

        while(l <= r){
            int mid = (l + r)/2;
            long long count = 0;
            for(int i=0; i<n; i++){
                count += ceil((double)piles[i]/mid);
            }
            if(count > h){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }

        return l;
    }
};