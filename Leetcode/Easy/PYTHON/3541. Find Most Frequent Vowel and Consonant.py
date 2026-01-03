class Solution:
    def maxFreqSum(self, s: str) -> int:
        freq={}
        for i in s:
            if i not in freq:
                freq[i]=1
            else:
                freq[i]+=1
        maxVow=0
        maxCons=0
        for i in s:
            if i in ['a','e','i','o','u']:
                if freq[i]>maxVow:
                    maxVow=freq[i]
            else:
                if freq[i]>maxCons:
                    maxCons=freq[i]
        return maxVow+maxCons
        
# link: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/description/