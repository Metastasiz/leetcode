//https://leetcode.com/problems/rotate-array/?envType=study-plan-v2&envId=top-interview-150
//time O(n)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};
