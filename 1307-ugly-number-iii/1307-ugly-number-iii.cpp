class Solution {
public:
    long long gcd(long long int a, long long int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    long long lcm(int a, int b) { 
        return (a / gcd(a, b)) * b; 
    }

    int checkPosition(long long k, long long a, long long b, long long c, long long lcms[]) {
        long long A = k / a, B = k / b, C = k / c;
        long long AB = k /lcms[0] , BC = k / lcms[1], AC = k / lcms[2];
        long long ABC = k / lcms[3];
        return A + B + C - (AB + BC + AC) + ABC;
    }
    int nthUglyNumber(int n, int a, int b, int c) {
        long long low = 1, high = INT_MAX;

        long long mid = 0;
        long long lcms[4];
        lcms[0] = lcm(a,b);
        lcms[1] = lcm(b,c);
        lcms[2] = lcm(a,c);
        lcms[3] = (lcms[0]*c)/gcd(lcms[0], c);
        while (low <= high) {
            mid = (low + high) / 2;
            int count = checkPosition(mid, a, b, c, lcms);
            if (count >= n)
                high = mid-1;
            else if (count < n)
                low = mid + 1;
        }

        return low;
    }
};