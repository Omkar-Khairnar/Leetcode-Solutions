class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int, char>>pq;
        pq.push({a, 'a'});
        pq.push({b, 'b'});
        pq.push({c, 'c'});

        char prev = '*';
        int ct = 0;
        string ans = "";

        while(!pq.empty()){
            char ch = pq.top().second;
            int val = pq.top().first;
            pq.pop();

            if(val <= 0) break;

            if(ch == prev){
                if(ct >= 2){
                    if(pq.empty() || pq.top().first <= 0) return ans;
                    auto pr = pq.top();
                    pq.pop();
                    ans += pr.second;
                    prev = pr.second;
                    ct=1;
                    pq.push({pr.first-1, pr.second});
                    pq.push({val, ch});
                }
                else{
                    ans += ch;
                    pq.push({--val, ch});
                    ct++;
                }
            }
            else{
                ans += ch;
                pq.push({--val, ch});
                ct=1;
                prev = ch;
            }
        }
        return ans;
    }
};