# Problem: 13. Roman to Integer
# Difficulty: Easy
# Language: Python3
# Date: 2025-12-31
# URL: https://leetcode.com/problems/roman-to-integer/submissions/1870068146/

        ans=0
        i=len(s)-1
        while (i>0):
            if(s[i-1]+s[i] in conv): 
                ans+=conv[s[i-1]+s[i]]
                i-=1
            else: ans+=conv[s[i]]
            i-=1
        }
        if(i!=-1): ans+=conv[s[i]]
            
        return ans
