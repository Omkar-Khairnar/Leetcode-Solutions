class Solution {
public:
    bool customComparator(const int a, const int b){
        return a>=b;
    }
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        for(int i=0; i<arr2.size(); i++){
            mp[arr2[i]] = i+1;
        }

        sort(arr1.begin(), arr1.end(), [&mp](int a, int b){
            if(mp[a] != 0 && mp[b] != 0){
                return mp[a] < mp[b];
            }
            else if(mp[a] != 0){
                return true;
            }
            else if(mp[b] != 0){
                return false;
            }

            return a < b;
        });

        return arr1;
    }
};