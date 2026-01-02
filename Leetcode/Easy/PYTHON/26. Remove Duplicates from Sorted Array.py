from typing import List
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        pos=0
        for i in range(1,len(nums)):
            if(nums[i]!=nums[pos]):
                nums[pos+1]=nums[i]
                pos=pos+1
        return pos+1

#Short Thought Process:
# We maintain a pointer 'pos' to track the position of the last unique element.
# We iterate through the array starting from the second element.
# Whenever we find a new unique element (i.e., an element different from nums[pos]),
# we place it at the next position (pos + 1) and update 'pos'.
# Finally, we return pos + 1, which represents the count of unique elements in the
# modified array.

# Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/