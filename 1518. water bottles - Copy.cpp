//TC=O(1)
//SC=O(1)
//approach:solved using mathematical logic to ensure efficient timing
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       return numBottles+((numBottles-1)/(numExchange-1));
    }
};