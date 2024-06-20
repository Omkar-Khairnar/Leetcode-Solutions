class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int n = position.size();
        int l = 1, h = position[n-1], mid;

        while(l <= h){
            mid = (l+h)/2;
            bool isPossible = true;
            int count = 1;
            int prev = position[0];
            for(int i=1; i<n; i++){
                if(position[i] - prev >= mid){
                    count++;
                    prev = position[i];
                }
            }

            if(count >= m){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }

        return h;

    }
};


