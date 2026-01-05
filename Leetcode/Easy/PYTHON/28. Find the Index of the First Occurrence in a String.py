class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
        
#Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
#Time Complexity: O(n*m) where n is the length of haystack and m is the length of needle in worst case 
#Space Complexity: O(1) as we are not using any extra space.
#To find without using inbuilt function we can use KMP algorithm for better time complexity.