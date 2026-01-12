class Solution:
    def minTimeToVisitAllPoints(self, points: List[List[int]]) -> int:
        ans = 0
        for i in range(1, len(points)):
            dx = abs(points[i][0] - points[i-1][0])
            dy = abs(points[i][1] - points[i-1][1])
            ans += max(dx, dy)
        return ans

#Short Thought Process:
#To move from one point to another, we can move diagonally which covers both x and y distance simultaneously. 
#Thus, the time taken to move from one point to another is determined by the larger of the two distances (x or y).
#This approach ensures that we minimize the total time taken to visit all points in the given order.

#Link: https://leetcode.com/problems/minimum-time-visiting-all-points/description/