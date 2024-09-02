class Solution {
public:
    vector<int> maximumSubarrayXor(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<vector<int>>grid(n, vector<int>(n,0));

        for(int g=0; g<n; g++){
            for(int i=0, j=g; i<n && j<n; i++, j++){
                if(g == 0){
                    grid[i][j] = nums[i];
                }
                else{
                    grid[i][j] = grid[i][j-1] ^ grid[i+1][j];
                }
            }
        }

        vector<vector<int>>maxScore(n, vector<int>(n,0));

         for(int g=0; g<n; g++){
            for(int i=0, j=g; i<n && j<n; i++, j++){
                if(g == 0){
                    maxScore[i][j] = nums[i];
                }
                else{
                    maxScore[i][j] = max(grid[i][j], max(maxScore[i][j-1], maxScore[i+1][j]));
                }
            }
        }
       
        vector<int>ans;
        for(int i=0; i<queries.size(); i++){
            ans.push_back(maxScore[queries[i][0]][queries[i][1]]);
        }


        return ans;
    }
};