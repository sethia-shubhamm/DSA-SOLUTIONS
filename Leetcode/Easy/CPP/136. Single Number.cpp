class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++) ans^=nums[i];
        return ans;         
    }
};

/* Short Thought Process: We can use the XOR bitwise operation to find the single number in the array. The property of XOR states that a^a=0 and a^0=a. Thus, when we XOR all the numbers in the array, the numbers that appear twice will cancel each other out, leaving only the single number. This approach has a time complexity of O(n) and a space complexity of O(1). */