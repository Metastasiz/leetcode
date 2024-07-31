//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/?envType=study-plan-v2&envId=top-interview-150
//time O(n)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int totalDiff = 0;
        int min = prices[0];
        int max = prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < max)
            {            
                totalDiff += max - min;
                min = prices[i];
                max = prices[i];
            }
            if (prices[i] > max)
                max = prices[i];
            
        }
        totalDiff += max - min;
        return totalDiff;
    }
};
