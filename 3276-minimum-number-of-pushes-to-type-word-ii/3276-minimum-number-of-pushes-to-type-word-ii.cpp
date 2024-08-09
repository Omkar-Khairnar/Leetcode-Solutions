class Solution {
public:
    int minimumPushes(string word) {
        vector<int>alpha(26,0);
        for(char u:word){
            alpha[u-'a']++;
        }

        priority_queue<int>pq;
        for(int i=0; i<26; i++){
            if(alpha[i] > 0){
                pq.push(alpha[i]);
            }
        }

        int pushes = 0;
        int rec = 0;
        while(!pq.empty()){
            pushes += pq.top()*((rec/8) + 1);
            pq.pop();
            rec++;
        }

        return pushes;
    }
};