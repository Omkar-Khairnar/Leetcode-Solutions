class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drinkCount = numBottles;
        int emptyCount = numBottles;
        while(emptyCount >= numExchange){
            drinkCount += emptyCount/numExchange;
            int extra = emptyCount/numExchange;
            emptyCount = emptyCount % numExchange;
            emptyCount += extra;
        }

        return drinkCount;
    }
};