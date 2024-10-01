class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int>mp;
        for(int i=0; i<arr.size(); i++){
            int rem = arr[i]%k;
            if(rem >= 0){
                if(mp[-rem] > 0){
                    mp[-rem]--;
                }
                else if(mp[k-rem] > 0){
                    mp[k-rem]--;
                }
                else{
                    mp[rem]++;
                }
            }
            else{
                if(mp[-rem] > 0){
                    mp[-rem]--;
                }
                else if(mp[-(k-abs(rem))] > 0){
                    mp[-(k-abs(rem))]--;
                }
                else{
                    mp[rem]++;
                }
            }
        }

        for(auto it:mp){
            if(it.second != 0) return false;
        }

        return true;
    }
};