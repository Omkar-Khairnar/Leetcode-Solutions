class Solution {
public:
   long long maximumPoints(vector<int>& myArr, int currentEnergy) {
        sort(myArr.begin(), myArr.end());

        long long pts = 0;
        int l = 0, r = myArr.size() - 1;
        int n = myArr.size();
        while (r >= 0) {
            if (l <= r && currentEnergy >= myArr[l]) {
                pts += (currentEnergy / myArr[l]);
                currentEnergy = currentEnergy % myArr[l];
            }
            else if (pts >= 1) {
                currentEnergy += myArr[r];
                r--;
            }
            else break;
        }

        return pts;
    }
};

