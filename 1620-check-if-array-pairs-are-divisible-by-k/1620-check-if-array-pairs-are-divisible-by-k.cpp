class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int>mp;
        for(int i=0; i<arr.size(); i++){
            int rem = arr[i]%k;
            int sign = (rem >= 0) ? 1 : -1;
            if(mp[-rem] > 0){
                mp[-rem]--;
            }
            else if(mp[sign*(k-abs(rem))] > 0){
                mp[sign*(k-abs(rem))]--;
            }
            else{
                mp[rem]++;
            }   
        }

        for(auto it:mp){
            if(it.second != 0) return false;
        }

        return true;
    }
};