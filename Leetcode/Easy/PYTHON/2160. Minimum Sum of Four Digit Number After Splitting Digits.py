class Solution:
    def minimumSum(self, num: int) -> int:
        arr = [int(x) for x in str(num)]
        arr.sort()
        return ((arr[0]*10)+arr[3])+((arr[1]*10)+arr[2])

#link: https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/description/