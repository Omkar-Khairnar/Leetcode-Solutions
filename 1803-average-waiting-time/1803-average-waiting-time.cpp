class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        double sum = 0;
        int curr = 0;
        for(int i=0; i<n; i++){
            if(curr >= customers[i][0]){
                sum += curr - customers[i][0];
            }
            curr = max(curr+customers[i][1], customers[i][0]+customers[i][1]);
            sum += customers[i][1];
        }

        double ans = (double)sum/n;
        return ans;
    }
};