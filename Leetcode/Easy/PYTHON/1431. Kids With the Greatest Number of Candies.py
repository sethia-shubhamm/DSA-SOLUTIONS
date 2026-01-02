class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        max_candies=max(candies)
        ans=[]
        for i in candies:
            if i+extraCandies>=max_candies:
                ans.append(True)
            else: ans.append(False)
        return ans
    
# Short Thought Process:
# To determine if each kid can have the greatest number of candies after receiving extraCandies,
# we first find the maximum number of candies any kid currently has. Then, for each kid,
# we check if their current candies plus the extraCandies is greater than or equal to
# the maximum. If it is, we append True to the result list; otherwise, we
# append False. Finally, we return the result list.

# https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/