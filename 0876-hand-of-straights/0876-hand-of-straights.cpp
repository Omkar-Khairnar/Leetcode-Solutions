class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(groupSize == 1) return true;
        if(n % groupSize != 0) return false;

        map<int,int>mp;
        for(int u: hand) mp[u]++;

        for(auto it = mp.begin(); it != mp.end(); it++){
            int freq = it->second;
            int hand = it->first;
            if(freq == 0) continue;
            while(freq--){
                for(int curr=0; curr<groupSize; curr++){
                    if(mp[hand+curr] == 0) return false;
                    mp[hand+curr]--;
                }
            }
        }

        return true;
    }
};