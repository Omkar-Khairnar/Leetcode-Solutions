class Solution {
public:
    void fun(int prev, vector<int>&ans, int n){
        int temp;
        
        for(int i=0; i<=9; i++){
            temp = prev*10 + i;
            if(temp > 0 && temp <= n){
                ans.push_back(temp);
                fun(temp, ans, n);
            }
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        fun(0, ans, n);
        return ans;
    }
};