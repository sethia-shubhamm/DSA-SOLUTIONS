class Solution:
    def areNumbersAscending(self, s: str) -> bool:
        tokenized=s.split(" ") 
        prev=-10**100
        for i in tokenized:
            if(i.isdigit()):
                if(int(i)>prev):
                    prev=int(i)
                else:
                    return False
        return True
        
# https://leetcode.com/problems/check-if-numbers-are-ascending-in-a-sentence/