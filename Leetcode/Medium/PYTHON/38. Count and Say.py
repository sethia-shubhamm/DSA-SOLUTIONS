class Solution:
    def countAndSay(self, n: int) -> str:
        ans="1"
        n=n-1
        while(n):
            temp = ""
            count = 1
            currVal = ans[0]

            for i in range(1, len(ans)):
                if ans[i] == currVal:
                    count += 1
                else:
                    temp += str(count) + currVal
                    currVal = ans[i]
                    count = 1

            temp += str(count) + currVal
            ans = temp
            n=n-1
        return ans

#link: https://leetcode.com/problems/count-and-say/description/