class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
             if (nums[mid] == 0) {
                swap(nums[low++], nums[mid++]);
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high--]);
            }
        }
    }
};

/* Short Thought Process: We use the Dutch National Flag algorithm to sort the colors in a single pass. We maintain three pointers: 'low' for the next position of 0, 'mid' for the current element being evaluated, and 'high' for the next position of 2. As we iterate through the array, we swap elements to their correct positions based on their values (0, 1, or 2). This approach ensures that we sort the array in O(n) time complexity and O(1) space complexity. */

//Dutch National Flag Algorithm