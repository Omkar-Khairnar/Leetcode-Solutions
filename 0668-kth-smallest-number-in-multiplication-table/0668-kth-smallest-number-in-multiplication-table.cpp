class Solution {
public:
    bool fun(int mid, int m, int n, int k){
        int j=n, i=1;
        int total = 0;
        while(i <= m){
            while(j>0 && i*j > mid){
                j--;
            }
            if(j == 0) break;
            total += j;
            i++;
        }

        return total >= k;
    }
    int findKthNumber(int m, int n, int k) {
        int l = 1, h = m*n;

        while(l < h){
            int mid = (l + h)/2;
            if(fun(mid, m, n, k)){
                h = mid;
            }
            else l = mid+1;
        }
        return l;
    }
};