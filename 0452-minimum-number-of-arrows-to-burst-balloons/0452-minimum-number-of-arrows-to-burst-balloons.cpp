class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        stack<int>st;

        int count = 1;
        int prevEnd = points[0][1];
        for(int i=1; i<points.size(); i++){
            if(points[i][0] <= prevEnd){
                prevEnd = min(prevEnd, points[i][1]);
            }
            else{
                count++;
                prevEnd = points[i][1];
            }
        }
        return count;
    }
};