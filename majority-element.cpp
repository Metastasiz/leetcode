//https://leetcode.com/problems/majority-element/?envType=study-plan-v2&envId=top-interview-150
//time O(nlogn)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        int indexMid = nums.size()/2;
        return nums[indexMid];
    }
};
