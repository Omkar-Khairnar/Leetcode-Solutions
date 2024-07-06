class Solution {
public:
 long long goodarrays(vector<int>& E, int curr) {
        sort(E.begin(), E.end());

        long long pts = 0;
        int l = 0, r = E.size()-1;
        int n = E.size();
        while(r>=0){
            if(l <= r && curr >= E[l]){
                pts += (curr/E[l]);
                curr = curr % E[l];
            }
            else if(pts >= 1){
                curr += E[r];
                r--;
            }
            else break;
        }

        return pts;
    }
   long long countSubarrays(vector<int>& vec, int K) {
        int n = vec.size();
        long long count = 0;
        
        unordered_map<long long, long long> prev;

        for (int i = 0; i < n; ++i) {
            unordered_map<long long, long long> curr; 

            if (vec[i] == K) {
                ++count;
            }
            curr[vec[i]] = 1;

            for (auto& [val, freq] : prev) {
                long long newAndResult = val & vec[i];
                if (newAndResult == K) {
                    count += freq;
                }
                curr[newAndResult] += freq;
            }
            
            prev = curr;
        }
        
        return count;
    }
};