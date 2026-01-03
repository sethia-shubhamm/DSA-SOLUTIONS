class Solution:
    def maximum69Number (self, num: int) -> int:
        n=str(num)
        for i in n:
            if(i=="6"):
                print(i)
                return int(n.replace('6','9',1))
                break
        return num

#link: https://leetcode.com/problems/maximum-69-number/description/