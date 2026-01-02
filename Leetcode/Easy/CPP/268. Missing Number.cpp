class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        int checkSum=0;
        for(int i=0;i<nums.size();i++) checkSum+=nums[i];
        return sum-checkSum;
    }
};

/* Short Thought Process: The sum of the first n natural numbers can be calculated using the formula n*(n+1)/2. By calculating the expected sum for numbers from 0 to n and subtracting the actual sum of the elements in the array, we can find the missing number efficiently. This approach has a time complexity of O(n) and a space complexity of O(1). */