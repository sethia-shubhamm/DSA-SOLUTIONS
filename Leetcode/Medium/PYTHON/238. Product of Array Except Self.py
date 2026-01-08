class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = [1] * n

        prefix = 1
        for i in range(n):
            ans[i] = prefix
            prefix *= nums[i]

        suffix = 1
        for i in range(n-1, -1, -1):
            ans[i] *= suffix
            suffix *= nums[i]

        return ans

#short Thought Process:
# 1. We initialize an answer array with 1s to store the final products. 
# 2. We calculate the prefix products by iterating through the array from left to right, updating the answer array with the product of all elements to the left of the current index.
# 3. We calculate the suffix products by iterating through the array from right to left and multiplying the current value in the answer array by the product of all elements to the right of the current index.
# 4. Finally, we return the answer array which now contains the product of all elements except self for each index.
#link: https://leetcode.com/problems/product-of-array-except-self/description/