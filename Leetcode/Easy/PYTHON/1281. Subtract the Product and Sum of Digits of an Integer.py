class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        str_n=str(n)
        sum_ans=0
        prod_ans=1
        for i in str_n:
            sum_ans+=int(i)
            prod_ans*=int(i)
        return prod_ans-sum_ans

# Short Thought Process:
# To find the difference between the product and sum of the digits of an integer, we can
# convert the integer to a string to easily iterate over each digit. We initialize two
# variables: one for the sum of the digits and another for the product of the digits.
# As we iterate through each character in the string representation of the integer,
# we convert it back to an integer and update the sum and product accordingly.
# Finally, we return the difference between the product and the sum.

# https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/