class Solution:
    def maxMatrixSum(self, matrix: List[List[int]]) -> int:
        mini=abs(matrix[0][0])
        negCount=0
        sumMat=0
        for i in range(0,len(matrix)):
            for j in range(0,len(matrix[0])):
                sumMat+=abs(matrix[i][j])
                if(matrix[i][j]<0): negCount+=1
                if(abs(matrix[i][j])<mini): mini=abs(matrix[i][j])
        if(negCount%2==0): return sumMat
        else: return sumMat-(2*mini)

#Link: https://leetcode.com/problems/maximum-matrix-sum/description/