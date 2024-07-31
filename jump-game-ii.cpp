//https://leetcode.com/problems/jump-game-ii/?envType=study-plan-v2&envId=top-interview-150
//time o(n^2) or o(n) if you believe "max" function is o(1)
class Solution {
public:
    int jump(vector<int>& nums) {
        int count, indexMax, indexRange;
        count = indexMax = indexRange = 0;
        for (int i = 0; i < nums.size()-1; i++)
        {
            indexMax = max(indexMax,nums[i]+i);
            if (indexMax >= nums.size()-1)
            {
                count++;
                break;
            }
            if (i == indexRange)
            {
                count++;
                indexRange = indexMax;
            }
        }
        return count;
    }
};
class Solution2 {
public:
    int jump(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        int lastIndex = -1;
        return getLastIndex(nums, nums.size()-1, 0);
    }
    int getLastIndex(vector<int>& nums, int prevIndex, int loop){
        int lastIndex = -1;
        for (int i = 0; i < prevIndex; i++)
        {
            if (nums[i] >= prevIndex-i)
            {
                lastIndex = i;
                break;
            }
        }
        cout << lastIndex << endl;
        if (lastIndex <= 0)
            return ++loop;
        if (loop > 10000)
            return lastIndex;
        return getLastIndex(nums, lastIndex, ++loop);
    }
};
