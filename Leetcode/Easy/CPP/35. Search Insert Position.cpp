class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        int mid=low+(high-low)/2;
        while(low<=high){
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
            mid=low+(high-low)/2;
        }
        return mid;
    }
};

// Short Thought Process: To find the insert position of a target in a sorted array, we use binary search. We maintain two pointers, low and high, to represent the current search range. We calculate the mid-point and compare the middle element with the target. If they match, we return the index. If the middle element is greater than the target, we adjust the high pointer to mid-1; otherwise, we adjust the low pointer to mid+1. When the search range is exhausted, the low pointer indicates the correct insert position for the target.

//Link: https://leetcode.com/problems/search-insert-position/