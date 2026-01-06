class Solution:
    def isNumber(self, s: str) -> bool:
        seen_digit = False
        seen_dot = False
        seen_exp = False

        for i, ch in enumerate(s):
            if ch.isdigit():
                seen_digit = True

            elif ch in '+-':
                # sign allowed only at start or right after e/E
                if i > 0 and s[i-1] not in 'eE':
                    return False

            elif ch == '.':
                # dot allowed only once and not after exponent
                if seen_dot or seen_exp:
                    return False
                seen_dot = True

            elif ch in 'eE':
                # exponent allowed only once and only if digit before it
                if seen_exp or not seen_digit:
                    return False
                seen_exp = True
                seen_digit = False  # must have digit after e/E

            else:
                return False

        return seen_digit

#Short thought process:
# The function iterates through each character in the string, using flags to track if a digit, dot, or exponent has been seen.
# It checks the validity of each character based on its position and the previously seen characters. 
# Finally, it returns True if at least one digit has been seen, ensuring the string represents a valid number.
# https://leetcode.com/problems/valid-number/