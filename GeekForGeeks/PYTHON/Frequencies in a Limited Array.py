class Solution:
    def frequencyCount(self, arr):
        #  code here
        ans=[]
        dict={}
        for i in arr:
            if i in dict:
                dict[i]+=1
            else:
                dict[i]=1
        for i in range (1,len(arr)+1):
            ans.append(dict.get(i,0))
        return ans

