class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        cp=10**100
        pft=0
        for i in prices:
            if(i<cp): cp=i
            pft = max(pft,i-cp)
        return pft