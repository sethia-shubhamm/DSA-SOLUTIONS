class Solution:
    def maxDistinct(self, s: str) -> int:
        freq={}
        count=0
        for i in s:
            if(i not in freq):
                count+=1
                freq[i]=1
        return count

# link: https://leetcode.com/problems/maximum-substrings-with-distinct-start/description/