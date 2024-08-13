class Solution {
public:
    vector<vector<int>> ans;
    void fun(int idx, int sum, vector<int>&temp, int target, vector<int>&arr){
        if(sum == target){
            ans.push_back(temp);
            return;
        }
        if(idx == arr.size() || sum > target) return ;

        fun(idx+1, sum, temp, target, arr);
        if(sum + arr[idx] <= target){
            temp.push_back(arr[idx]);
            fun(idx, sum+arr[idx], temp, target, arr);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        fun(0, 0, temp, target, candidates);
        return ans;
    }
};