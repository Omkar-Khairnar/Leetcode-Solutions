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
        // fun(0, ans, n);
        // return ans;

        int curr = 1;
        for(int i=1; i<=n; i++){
            ans.push_back(curr);
            if(curr*10 <= n){
                curr *= 10;
            }
            else if(curr % 10 != 9 && curr+1 <= n){
                curr++;
            } 
            else{
                while((curr/10) % 10 == 9){
                    curr /= 10;
                }
                curr = curr/10;
                curr++;
            }
        }
        
        return ans;
    }
};