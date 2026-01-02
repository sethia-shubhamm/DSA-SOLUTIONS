
from typing import List

class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        sorted_nums = sorted(nums)
        pos = {}

        for i, n in enumerate(sorted_nums): #enumerate gives index and value (eg: {0,1}, {1,2}...)
            if n not in pos:
                pos[n] = i

        return [pos[n] for n in nums]
    
# Short Thought Process: To find how many numbers are smaller than the current number in the list, we can sort the list and use a dictionary to store the first occurrence index of each number in the sorted list. This index represents how many numbers are smaller than that number. Finally, we create a result list by mapping each number in the original list to its corresponding count from the dictionary.

# https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/