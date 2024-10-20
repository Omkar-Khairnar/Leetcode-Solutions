class Solution {
public:
    vector<int> findDivisors(int num) {
        vector<int> divisors;
        for (int i = 1; i <= sqrt(num); i++) {
            if (num % i == 0) {
                if (num / i == i)
                    divisors.push_back(i);
                else {
                    divisors.push_back(i);
                    divisors.push_back(num / i);
                }
            }
        }
        return divisors;
    }

//     void printDivisors(int n)
// {
//     // Note that this loop runs till square root
//     for (int i = 1; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             // If divisors are equal, print only one
//             if (n / i == i)
//                 cout << i << " ";
//             else // Otherwise print both
//                 cout << i << " " << n / i << " ";
//         }
//     }
// }

    int minOperations(vector<int>& numbers) {
        int operations = 0;
        int length = numbers.size();

        for (int i = length - 2; i >= 0; i--) {
            int nextNum = numbers[i + 1];
            if (nextNum >= numbers[i]) continue;

            int minimumDiv = ceil((double)numbers[i] / nextNum);
            vector<int> divisorsList = findDivisors(numbers[i]);
            sort(divisorsList.begin(), divisorsList.end());

            int lowerBoundIndex = lower_bound(divisorsList.begin(), divisorsList.end(), minimumDiv) - divisorsList.begin();
            if (lowerBoundIndex == divisorsList.size() - 1) return -1;

            numbers[i] = numbers[i] / divisorsList[lowerBoundIndex];
            operations++;
        }

        return operations;
    }
};
