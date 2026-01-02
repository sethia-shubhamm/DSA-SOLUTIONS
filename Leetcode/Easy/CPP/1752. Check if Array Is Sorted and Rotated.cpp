class Solution {
public:
    bool check(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) count++;
        }
        if(nums[nums.size()-1]>nums[0]) count++;
        return (count>1)?0:1;
    }
};

/* Short Theought Process: To determine if the array is sorted and rotated, we need to count the number of times an element is greater than the next element in the array. If this count exceeds one, it indicates that the array is not sorted and rotated. We also need to check the last element with the first element to account for the rotation. If the count is one or less, the array is considered sorted and rotated. */