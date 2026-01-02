class Solution:

    def countFactors (self, n):
        # code here
        count = 0
        for i in range(1, int(n**0.5) + 1):
            if n % i == 0:
                if i == n // i:
                    count += 1
                else:
                    count += 2
        return count
    
