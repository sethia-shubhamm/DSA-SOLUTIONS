class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        int mid=low+(high-low)/2;
        while(low<=high){
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
            mid=low+(high-low)/2;
        }
        return -1;
    }
};

// Short Thought Process: To perform a binary search, we initialize two pointers, low and high, to represent the current search range. We calculate the mid-point and compare the middle element with the target. If they match, we return the index. If the middle element is greater than the target, we adjust the high pointer to mid-1; otherwise, we adjust the low pointer to mid+1. This process continues until we find the target or the search range is exhausted.

//Link: https://leetcode.com/problems/binary-search/