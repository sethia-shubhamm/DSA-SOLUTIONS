class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x<0: return False
        int_str=str(x)
        return int_str==int_str[::-1]
        
# Short Thought Process:
# To determine if an integer is a palindrome, we first check if the number is negative.
# Negative numbers cannot be palindromes due to the negative sign. Next, we convert
# the integer to a string and compare it with its reverse. If both are the same,
# the integer is a palindrome, and we return True; otherwise, we return False.

# https://leetcode.com/problems/palindrome-number/