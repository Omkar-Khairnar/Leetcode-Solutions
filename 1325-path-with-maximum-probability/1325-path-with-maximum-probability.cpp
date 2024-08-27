#define dl double
class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<dl>cost(n, INT_MIN);
        cost[start] = 1;
        vector<vector<pair<dl,dl>>>adj(n);

        for(int i=0; i<edges.size(); i++){
            adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        //Pair<Val, Node>
        priority_queue<pair<dl,dl>>pq;
        pq.push({1, start});

        while(!pq.empty()){
            dl node = pq.top().second;
            dl val = pq.top().first;
            pq.pop();

            if(node == end) return val;
            for(auto pr : adj[node]){
                dl nextNode = pr.first;
                dl currVal = pr.second;
                if(cost[nextNode] < val * currVal){
                    cost[nextNode] = val * currVal;
                    pq.push({cost[nextNode], nextNode});
                }
            }
        }

        return cost[end] != INT_MIN ? cost[end] : 0;
    }
};