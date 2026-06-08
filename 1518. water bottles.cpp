//TC=O(log n)
//SC=O(1)
//approach:solved using while loop
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totald=0;
        int empty=0;
        while(numBottles>0)
        {
            totald+=numBottles;
            empty+=numBottles;
            numBottles=empty/numExchange;
            empty=empty%numExchange;
        }
        return totald;
    }
};