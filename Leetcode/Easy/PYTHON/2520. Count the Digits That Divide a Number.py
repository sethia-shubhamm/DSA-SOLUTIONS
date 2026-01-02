class Solution:
    def countDigits(self, num: int) -> int:
        count=0
        og=num
        while num>0:
            dig=num%10
            num=int(num/10)
            if og%dig==0: count+=1
        return count

# Short Thought Process:
# To count the digits that divide a number, we can extract each digit of the number by
# repeatedly taking the modulus and dividing by 10. For each digit, we check if it divides
# the original number evenly (i.e., the remainder when dividing the original number by the digit
# is zero). If it does, we increment our count. Finally, we return the count of such digits.

# https://leetcode.com/problems/count-the-digits-that-divide-a-number/