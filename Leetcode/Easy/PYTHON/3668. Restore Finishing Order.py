class Solution:
    def recoverOrder(self, order: List[int], friends: List[int]) -> List[int]:
        friends=set(friends)
        ans=[]
        for i in order:
            if(i in friends): ans.append(i)
        return ans
        
# https://leetcode.com/problems/restore-finishing-order/

#Short thought process:
# We need to restore the finishing order of friends from the given order list.
# We can achieve this by iterating through the order list and checking if each element is in the friends list.
# If it is, we append it to the answer list.
# Finally, we return the answer list.from typing import List    
