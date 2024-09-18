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
//This approach is passing all the cases except of scenerio [34323,3432]
        //  sort(vec.begin(), vec.end(), [](const string &a, const string &b){
            // int lenA = a.size(), lenB = b.size();
            // int i=0, j=0;
            // while(i < lenA && j < lenB){
            //     if(a[i] == b[j]){
            //         i++, j++;
            //     }
            //     else break;
            // }
            // if(i == lenA && j == lenB) return a > b;
            // else if(i == lenA){
            //     while(a[lenA-1] == b[j]){
            //         j++;
            //     }
            //     return a[lenA-1] > b[j]; 
            // }
            // else if(j == lenB){
            //     while(b[lenB-1] == a[i]){
            //         i++;
            //     }
            //     return a[i] > b[lenB-1];
            // }
            // return a > b;
        // });
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
