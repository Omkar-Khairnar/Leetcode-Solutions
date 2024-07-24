#define ll long long
class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        int n = nums.size();
        vector<int>diff(n);
        for(int i=0; i<n; i++) diff[i] = target[i] - nums[i];

        ll opr = 0, incOp = 0, decOp = 0;

        for(int i=0; i<n; i++){
            if(diff[i]>0){
                if(diff[i] > incOp){
                    int extra = diff[i] - incOp;
                    opr += extra;
                    incOp = diff[i];
                }
                else{
                    incOp = diff[i];
                }
                decOp = 0;
            }
            else if(diff[i] < 0){
                if(-diff[i] > decOp){
                    int extra = -diff[i] - decOp;
                    opr += extra;
                    decOp = -diff[i];
                }
                else{
                    decOp = -diff[i];
                }
                incOp = 0;
            }
            else{
                incOp = 0, decOp = 0;
            }
        }

        return opr;
    }
};