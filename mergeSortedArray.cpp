// Time O(n+m)
// Space O(1)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //https://leetcode.com/problems/merge-sorted-array/?envType=study-plan-v2&envId=top-interview-150

        //Extra Known
        //array is already sorted

        int index_1 = m-1;
        int index_2 = n-1;
        int index_current = nums1.size()-1;
        while (index_1 >= 0 && index_2 >= 0)
        {
            if (nums2[index_2] > nums1[index_1])
                nums1[index_current--] = nums2[index_2--];
            else 
                nums1[index_current--] = nums1[index_1--];
        }
        while(index_2 >= 0)
        {
            nums1[index_current--] = nums2[index_2--];
        }
    }
};
