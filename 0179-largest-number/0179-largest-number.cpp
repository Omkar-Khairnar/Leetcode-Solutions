class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>vec;
        bool isAllZero = true;
        for(int i=0; i<nums.size(); i++){
            vec.push_back(to_string(nums[i]));
            if(nums[i] != 0) isAllZero = false;
        }

        if(isAllZero) return "0";

        sort(vec.begin(), vec.end(), [](const string &a, const string &b){
            string AB = a+b;
            string BA = b+a;
            if(AB >= BA) return true;
            else return false;
        });

        string ans = "";
        for(string s: vec){
            ans += s;
        }

        return ans;
    }
};
