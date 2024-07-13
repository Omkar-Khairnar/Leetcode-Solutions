class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        vector<vector<int>>vec; //({position, health, direction (R:0, L:1)});
        int n = healths.size();
        unordered_map<int,int>mp; //{positions[i],i}
        for(int i=0; i<n; i++){
            vec.push_back({positions[i], healths[i], (directions[i] == 'R' ? 0 : 1)});
            mp[positions[i]]=i;
        }
        sort(vec.begin(), vec.end());
        vector<pair<int,int>>temp; //position, health
        stack<pair<int,int>>st; //{health, position};
        for(int i=0; i<n; i++){
            if(vec[i][2] == 0){
                st.push({vec[i][1], vec[i][0]});
            }
            else{
                while(!st.empty() && vec[i][1] > st.top().first){
                    st.pop();
                    vec[i][1]--;
                }
                if(st.empty()) temp.push_back({mp[vec[i][0]], vec[i][1]});
                else if(st.top().first == vec[i][1]) st.pop();
                else st.top().first--;
            }
        }

        while(!st.empty()){
            temp.push_back({mp[st.top().second], st.top().first});
            st.pop();
        }

        sort(temp.begin(), temp.end());

        vector<int>ans;
        for(int  i=0; i<temp.size(); i++){
            ans.push_back(temp[i].second);
        }

        return ans;
    }
};