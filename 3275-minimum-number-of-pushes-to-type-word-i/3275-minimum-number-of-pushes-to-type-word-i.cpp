class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        if(n <= 8) return n;

        int pushes = 0;
        int rec = 1;
        while(n > 8){
            pushes += 8*rec;
            rec++;
            n-= 8;
        }

        pushes += n*rec;
        return pushes;
    }
};