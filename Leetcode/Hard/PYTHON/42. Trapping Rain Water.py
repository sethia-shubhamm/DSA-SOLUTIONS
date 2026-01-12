class Solution:
    def trap(self, height: List[int]) -> int:
        maxLeft=[]
        ans=0
        maxRight=[0]*len(height)
        maxLeft.append(0)
        maxRight[len(height)-1]=0
        for i in range(1,len(height)):
            maxLeft.append(max(maxLeft[i-1],height[i-1]))
        for i in range(len(height)-2,-1,-1):
            maxRight[i]=max(maxRight[i+1],height[i+1])
        for i in range(0,len(height)):
            minHeight=min(maxLeft[i],maxRight[i])
            canStore=minHeight-height[i]
            if(canStore>0): ans+=canStore
        return ans


#Not optimized but easy to understand (Prefix Sum Approach where we precompute max left and max right for each index and then calculate water stored at each index)
#eg: height=[0,1,0,2,1,0,1,3,2,1,2,1]
#maxLeft=[0,0,1,1,2,2,2,2,3,3,3,3]
#maxRight=[3,3,3,3,3,3,2,2,2,2,1,0]
#Now water stored at each index = min(maxLeft[i],maxRight[i]) - height[i]
#Total water stored = sum of water stored at each index 

#Optimized Approach: Two Pointer Approach