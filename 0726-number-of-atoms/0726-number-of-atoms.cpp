class Solution {
public:
    map<string,int> fun(int &idx, string &str, int n){
        map<string,int>mp;
        if(idx == str.size()) return mp;

        while(idx < n){
            if(str[idx] >= 'A' && str[idx] <= 'Z'){
                string temp = "";
                temp += str[idx];
                idx++;
                while(idx < n && str[idx]>='a' && str[idx] <= 'z'){
                    temp += str[idx];
                    idx++;
                }
                string num ="";
                while(idx<n && str[idx]>='0' && str[idx] <= '9'){
                    num += str[idx];
                    idx++;
                }
                if(temp.size() > 0){
                    if(num.size() > 0){
                        mp[temp] += stoi(num);
                    } 
                    else mp[temp] += 1;
                }
            }
            else if(str[idx] == '('){
                idx++;
                map<string, int> nextmap = fun(idx, str, n);
                string num ="";
                while(idx<n && str[idx]>='0' && str[idx] <= '9'){
                    num += str[idx];
                    idx++;
                }
                int val = (num.size()>0) ? stoi(num) : 1;
                for(auto it=nextmap.begin(); it != nextmap.end(); it++){
                    it->second *= val;
                    mp[it->first] += it->second;
                }
            }
            else if(str[idx] ==')'){
                idx++;
                return mp;
            }
        }

        return mp;
    }
    string countOfAtoms(string formula) {
        int n = formula.size();
        int idx = 0;
        string ans = "";
        map<string, int>mp = fun(idx, formula, n);
        for(auto it=mp.begin(); it != mp.end(); it++){
            cout<<it->first<<" "<<it->second<<endl;
            ans += it->first;
            if(it->second > 1) ans += to_string(it->second);
        }

        return ans;
    }
};