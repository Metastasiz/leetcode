//Time O(n)
//Space O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //https://leetcode.com/problems/remove-duplicates-from-sorted-array/?envType=study-plan-v2&envId=top-interview-150

        //Extra Known
        //Array sorted
        //in-place

        int index_current = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[index_current] != nums[i])
            {
                nums[++index_current] = nums[i];
            }
        }
        return index_current+1;
    }
};
