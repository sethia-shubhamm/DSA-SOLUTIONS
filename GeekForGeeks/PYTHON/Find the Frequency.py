"""
You're given an array (arr)
Return the frequency of element x in the given array
"""
class Solution:
    def findFrequency(self, arr, x):
        # code here
        return arr.count(x)
    
#using dictionary

class Solution:
    def findFrequency(self, arr, x):
        # code here
        dict={}
        for i in arr:
            if i in dict:
                dict[i]+=1
            else:
                dict[i]=1
        return dict.get(x,0)