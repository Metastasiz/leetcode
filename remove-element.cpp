// Time O(n)
// Space O(1)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //https://leetcode.com/problems/remove-element/?envType=study-plan-v2&envId=top-interview-150

        int index_current = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
                nums[index_current++] = nums[i];
        }
        return index_current;
    }
};
