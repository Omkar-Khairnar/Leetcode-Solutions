class Solution {
public:
    int minimumLines(vector<vector<int>>& stockPrices) {
        long double prevSlope = INT_MAX;
        int n = stockPrices.size();
        long double currSlope;
        int count = 0;
        sort(stockPrices.begin(), stockPrices.end());
        for(int i=1; i<n; i++){
            currSlope = (long double)(stockPrices[i][1]-stockPrices[i-1][1])/(stockPrices[i][0]-stockPrices[i-1][0]);
            if(prevSlope != currSlope){
                count++;
                prevSlope = currSlope;
            }
        }

        return count;
    }
};