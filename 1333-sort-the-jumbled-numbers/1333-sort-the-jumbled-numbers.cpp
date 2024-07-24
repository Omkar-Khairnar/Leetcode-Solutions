class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;

        for(int i=0; i<nums.size(); i++){
            int num = 0;
            string str = to_string(nums[i]);
            for(int j=0; j<str.size(); j++){
                num = num*10 + mapping[str[j]-'0'];
            }
            pq.push({num,i});
        } 

        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(nums[pq.top().second]);
            pq.pop();
        }

        return ans;
    }
};