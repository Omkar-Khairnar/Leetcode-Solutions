class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        queue<int>q;
        unordered_map<int,int>mp;
        for(int i=0; i<n-1; i++){
            if(nums[i] == nums[i+1]) q.push(nums[i]);
            mp[nums[i]]++;
        }
        mp[nums[n-1]]++;

        int val = nums[0]+1;
        int incr = 0;
        while(!q.empty()){
            val = max(val, q.front()+1);
            while(mp[val] > 0 ){
                val++;
            }
            int num = q.front();
            q.pop();
            incr += (val - num);
            val++;
            // cout<<incr<<" ";
        }
        // 1 1 2 2 3 7
       





        

        return incr;
    }
};