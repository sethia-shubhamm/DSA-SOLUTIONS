class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        lessList=[]
        moreList=[]
        eqList=[]
        for i in nums:
            if i<pivot:
                lessList.append(i)
            elif i>pivot:
                moreList.append(i)
            else:
                eqList.append(i)
        return lessList+eqList+moreList
                
        
        
# https://leetcode.com/problems/partition-array-according-to-given-pivot/