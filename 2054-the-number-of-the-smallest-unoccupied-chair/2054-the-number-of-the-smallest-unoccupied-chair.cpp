class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n = times.size();
        int targetArrivalTime = times[targetFriend][0];
        sort(times.begin(), times.end());
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>end;
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0; i<n; i++) pq.push(i);

        for(int i=0; i<n; i++){
            while(!end.empty() && end.top().first <= times[i][0]){
                pq.push(end.top().second);
                end.pop();
            }
            if(times[i][0] == targetArrivalTime){
                return pq.top();
            }
            int seat = pq.top();
            pq.pop();

            end.push({times[i][1], seat});
        }

        return -1;
    }
};