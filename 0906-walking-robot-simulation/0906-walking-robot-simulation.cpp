class Solution {
public:
    char getDirection(char curr, int input){
        if(curr == 'e') return input == -1 ? 's' : 'n';
        if(curr == 'w') return input == -1 ? 'n' : 's';
        if(curr == 'n') return input == -1 ? 'e' : 'w';
        else return input == -1 ? 'w' : 'e';
    }
    
    pair<int,int> getLocation(int x, int y, char dir, int steps, unordered_map<int, set<int>>&mp){
        int pos = 0;
        if(dir == 'e'){
            for(int i=1; i<=steps; i++){
                if(mp[x+i].find(y) != mp[x+i].end()) return {x+i-1, y};
            }
            return {x+steps, y};
        }
        else if(dir == 'w'){
            for(int i=1; i<=steps; i++){
                if(mp[x-i].find(y) != mp[x-i].end()) return {x-i+1, y};
            }
            return {x-steps, y};
        }
        else if(dir == 'n'){
            for(int i=1; i<=steps; i++){
                if(mp[x].find(y+i) != mp[x].end()) return {x, y+i-1};
            }
            return {x, y+steps};
        }
        else{
            for(int i=1; i<=steps; i++){
                if(mp[x].find(y-i) != mp[x].end()) return {x, y-i+1};
            }
            return {x, y-steps};
        }
    }

    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_map<int, set<int>>mp;
        for(auto vec : obstacles){
            mp[vec[0]].insert(vec[1]);
        }
        int maxi = 0;
        char dir = 'n';
        int x = 0, y = 0;
        for(int i=0; i<commands.size(); i++){
            int cmd = commands[i];
            if(cmd == -1 || cmd == -2){
                dir = getDirection(dir, cmd);
            }
            else{
                auto pr = getLocation(x, y, dir, cmd, mp);
                x = pr.first;
                y = pr.second;
                maxi = max(maxi, x*x + y*y);
            }
        }


        return maxi;
    }
};