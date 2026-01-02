class Solution:
    def findUnion(self, a, b):
        # code here 
        ans=list(set(a)|set(b))
        ans.sort()
        return ans