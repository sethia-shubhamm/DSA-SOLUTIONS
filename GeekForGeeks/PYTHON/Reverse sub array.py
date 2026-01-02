#User function Template for python3
class Solution:
	def reverseSubArray(self,arr,l,r):
		# code here
		 return arr[:l-1] + arr[l-1:r][::-1] + arr[r:]

#Using recursion
class Solution:
    def reverseSubArray(self,arr,l,r):
        # code here
        if l>=r:
            return arr
        arr[l-1], arr[r-1] = arr[r-1], arr[l-1]
        return self.reverseSubArray(arr, l+1, r-1)