class Solution:
    def countGoodNumbers(self, n: int) -> int:
        mod=(10**9)+7
        if(n%2==0): return ((5**(n//2))*(4**(n//2))) % mod
        else:
            power=math.ceil(n/2)
            return ((5**power)*(4**(power-1))) % mod

#this fails for large n due to time limit exceeded better approach is to use modular exponentiation

class Solution:
    def countGoodNumbers(self, n: int) -> int:
        mod = 10**9 + 7

        even_positions = (n + 1) // 2   # ceil(n/2)
        odd_positions = n // 2

        return (pow(5, even_positions, mod) *
                pow(4, odd_positions, mod)) % mod

#This uses modular exponentiation which is efficient for large n 
#The pow function in Python can take three arguments: base, exponent, and modulus. 
# It computes (base ** exponent) % modulus using an efficient algorithm called "exponentiation by squaring," which is much faster than calculating base ** exponent first and then taking the modulus, especially for large exponents.

#power fn logic code:
def modular_exponentiation(base, exponent, modulus):
    result = 1
    base = base % modulus
    while exponent > 0:
        if (exponent % 2) == 1:  # If exponent is odd, multiply base with result
            result = (result * base) % modulus
        exponent = exponent >> 1  # Divide exponent by 2
        base = (base * base) % modulus  # Square the base
    return result

#Link to problem:
# https://leetcode.com/problems/count-good-numbers/