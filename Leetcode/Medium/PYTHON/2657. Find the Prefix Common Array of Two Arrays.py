class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        freq={}
        C=[]
        for i in range(0,len(A)):
            if A[i] not in freq:
                freq[A[i]]=1
            else:
                freq[A[i]]+=1
            if B[i] not in freq:
                freq[B[i]]=1
            else:
                freq[B[i]]+=1
            count=0
            for i in freq:
                if(freq[i]==2): count+=1
            C.append(count)
        print(freq)
        return C
            
#link: https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/description/