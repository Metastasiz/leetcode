//https://leetcode.com/problems/jump-game/submissions/1339925352/?envType=study-plan-v2&envId=top-interview-150
//time O(n)
class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums[0] == 0 && nums.size() > 1) return false;
        if (nums[0] == 0) return true;
        int target = 1;
        for (int i = nums.size()-1 -1; i >= 1; i--)
        {
            if (target <= nums[i])
                target = 1;
            else 
                target++;
        }
        if (target <= nums[0])
            return true;
        return false;
    }
};
