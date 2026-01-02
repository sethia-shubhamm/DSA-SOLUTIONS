class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        return bin(start ^ goal).count("1")
    
# Link: https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/

# Short thought process:
# To find the minimum number of bit flips required to convert one number to another, we can use the XOR operation. The XOR of two bits is 1 if the bits are different and 0 if they are the same. Therefore, by performing an XOR operation between the start and goal numbers, we can identify the positions where the bits differ. The number of 1s in the resulting binary representation of the XOR operation indicates the number of bit flips needed. We can count these 1s using Python's built-in bin() function, which converts a number to its binary representation, and then use the count() method to count the occurrences of '1'.
        