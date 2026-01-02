class Solution:
    # Function to calculate factorial of a number.
    def factorial(self, n: int) -> int:
        # code here
        if(n<=1): return 1
        return self.factorial(n-1)*n
    
