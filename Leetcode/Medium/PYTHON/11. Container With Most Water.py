class Solution:
    def maxArea(self, height: List[int]) -> int:
        l=0
        e=len(height)-1
        area=0
        while(l<e):
            currArea=(e-l)*min(height[e],height[l])
            area=max(area,currArea)
            if(height[e]<height[l]): e-=1
            else: l+=1
        return area
    
#Link: https://leetcode.com/problems/container-with-most-water/