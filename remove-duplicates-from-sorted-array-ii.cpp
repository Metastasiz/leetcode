//https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Known
        //in-place, sorted
        int maxDupe = 2;
        map<int,int> mapCount;
        for (int i = 0; i < nums.size(); i++)
        {
            if (!mapCount.contains(nums[i]))
                mapCount[nums[i]] = 1;
            else if (mapCount[nums[i]] < maxDupe)
                mapCount[nums[i]]++;
        }
        int indexCurrent = 0;
        for (const auto& [key, value] : mapCount)
        {
            for (int i = 0; i < value; i++)
                nums[indexCurrent++] = key;
        }
        nums.erase(nums.begin()+indexCurrent,nums.end());
        return indexCurrent;
    }
};
