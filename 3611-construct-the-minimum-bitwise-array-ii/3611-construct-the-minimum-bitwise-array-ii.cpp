class Solution {
public:
    int isAllOne(int n){
        int temp = n;
        int ct =0;
        int sz =0;
        bool can = true;
        while(n){
            if(n % 2 == 1 && can){
                ct++;
            }
            else can = false;
            n >>= 1;
            sz++;
        }
        // int cp = 0;
        // int tmpSz = sz;
        // while(tmpSz--){
        //     cp <<= 1;
        //     cp |= 1;
        // }
        // int tmp = sz-ct;
        // int val = 0;
        // while(tmp--){
        //     val <<= 1;
        //     val |= 1;
        // }
        // while(ct--){
        //     val <<= 1;
        // }
        // cout<<cp<<endl;
        // cout<<val<<endl;
        // cp &= val;
        // cout<<cp<<endl;
        // val = ~val;
        // cout<<val<<endl;
        // val >>= 1;
        // cout<<val<<endl;

        // cp |= val;

        int val = 0;
        int tmp = sz;
        int target = sz-ct;
        int idx= 0;
        while(tmp--){
            val <<= 1;
            if(idx != target) val |= 1;
            idx++;
        }
        // cout<<val;

        return val&temp;
    }
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>val;
        for(int i=0; i<n; i++){
            if(nums[i] % 2 == 0) val.push_back(-1);
            else{
                    int temp = nums[i];
                    int last = nums[i] % 2;
                    nums[i] >>= 1;
                    int second = nums[i] %2;
                    nums[i] >>= 1;
                    int ans = nums[i];
                    if(second == 1){
                        ans <<= 2;
                        ans |= 1;
                        val.push_back(isAllOne(temp));
                    }
                    else{
                        ans <<= 2;
                        val.push_back(ans);
                    }
                
               
            }
        }

        return val;
    }
};

