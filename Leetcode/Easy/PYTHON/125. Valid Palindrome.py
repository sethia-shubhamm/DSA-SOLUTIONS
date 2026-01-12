class Solution:
    def isPalindrome(self, s: str) -> bool:
        l=0
        e=len(s)-1
        while(l<=e):
            if(not s[l].isalnum()): l+=1
            elif((not s[e].isalnum())): e-=1
            else:
                if(s[l].lower()!=s[e].lower()): return False
                l+=1
                e-=1
        return True
    
#Link: https://leetcode.com/problems/valid-palindrome/