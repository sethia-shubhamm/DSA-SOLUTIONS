class Solution:
    def findArray(self, pref: List[int]) -> List[int]:
        prev=pref[0]
        for i in range(1,len(pref)):
            ans=pref[i]^prev
            prev=pref[i]
            pref[i]=ans
        return pref
        
# Link: https://leetcode.com/problems/find-the-original-array-of-prefix-xor/description/