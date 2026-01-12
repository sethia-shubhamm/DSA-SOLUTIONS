class Solution:
    def myAtoi(self, s: str) -> int:
        ans = 0
        isNeg = False
        foundDigit = False

        for c in s:
            if c == " " and not foundDigit:
                continue

            if (c == "+" or c == "-") and not foundDigit:
                if c == "-":
                    isNeg = True
                foundDigit = True
                continue

            if not c.isdigit():
                break

            foundDigit = True
            ans = ans * 10 + int(c)

        ans = -ans if isNeg else ans

        if ans < -2**31:
            return -2**31
        if ans > 2**31 - 1:
            return 2**31 - 1
        return ans

#Link: https://leetcode.com/problems/string-to-integer-atoi/