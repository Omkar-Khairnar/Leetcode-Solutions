class Solution {
public:
    int minSwaps(string s) {
        stack<int>closedIndex;
        int n = s.size();

        for(int i=0; i<n; i++){
            if(s[i] == '[') closedIndex.push(i);
        }
        int swaps = 0, score = 0;
        for(int i=0; i<n; i++){
            if(s[i] == ']') score--;
            else score++;
            if(score < 0){
                swap(s[i], s[closedIndex.top()]);
                closedIndex.pop();
                score += 2;
                swaps++;
            }
        }

        return swaps;
    }
};