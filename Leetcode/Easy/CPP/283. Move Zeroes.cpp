class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) {
                swap(nums[i],nums[pos]);
                pos++;
            }
        }
    }
};

/* Short Thought Process: We maintain a pointer 'pos' to track the position where the next non-zero element should be placed. As we iterate through the array, whenever we encounter a non-zero element, we swap it with the element at 'pos' and increment 'pos'. This effectively moves all non-zero elements to the front while maintaining their relative order, and fills the rest of the array with zeros. The time complexity is O(n) and space complexity is O(1). */