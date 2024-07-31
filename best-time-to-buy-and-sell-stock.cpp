//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/?envType=study-plan-v2&envId=top-interview-150
//time O(n)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxDiff = 0;
        int min = prices[0];
        for (int i = 0; i < prices.size(); i++)
        {
            if (maxDiff < prices[i] - min)
                maxDiff = prices[i] - min;
            if (prices[i] < min)
                min = prices[i];
        }
        return maxDiff;
    }
};
