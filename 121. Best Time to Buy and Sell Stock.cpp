//TC:O(n)
//SC:O(1)
//solved using two pointers with greedy
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int left=0;
       int right=1;
       int max_p=0;
       while(right<prices.size())
       {
        if(prices[left]<prices[right])
        {
            int profit=prices[right]-prices[left];
            max_p=max(max_p,profit);
        }
        else
        {
            left=right;
        }
        right++;
       }
       return max_p;
    }
};