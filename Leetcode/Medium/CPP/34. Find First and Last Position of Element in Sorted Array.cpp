class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
       int low=0,high=nums.size()-1;
       int lowVal=-1,highVal=-1;
        int mid=low+(high-low)/2;
        while(low<=high){
            if(nums[mid]==target){
                high=mid-1;
                lowVal=mid;
            }
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
            mid=low+(high-low)/2;
        } 
        low=0,high=nums.size()-1;
        mid=low+(high-low)/2;
        while(low<=high){
            if(nums[mid]==target){
                low=mid+1;
                highVal=mid;
            }
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
            mid=low+(high-low)/2;
        } 
        ans.push_back(lowVal);
        ans.push_back(highVal);
        return ans;
    }
};

// Short Thought Process: To find the first and last position of a target element in a sorted array, we perform two separate binary searches. The first search finds the lowest index of the target by adjusting the high pointer when the target is found. The second search finds the highest index by adjusting the low pointer when the target is found. We store these indices and return them as a vector.

//Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/