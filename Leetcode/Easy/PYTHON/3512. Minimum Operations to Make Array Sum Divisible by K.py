class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        return (sum(nums)%k)
    
#Short thought process: to make the sum of the array divisible by k, we need to remove the remainder when the sum is divided by k. Each operation allows us to remove 1 from any element, so the minimum number of operations required is equal to that remainder.
#formula: sum(nums) % k
        
# https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/description/