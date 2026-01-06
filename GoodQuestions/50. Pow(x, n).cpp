class Solution {
public:
    double power(double x, int n){
        if(n==0) return 1;
        if(n<0) return power(x,n+1)/x;
        return power(x,n-1)*x;
    }
    double myPow(double x, int n) {
        return power(x,n);
    }
};

//This approuch would give TLE for large n and could cause stack overflow due to deep recursion.
//Better approuch is using fast exponentiation (exponentiation by squaring).

class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;   // handle INT_MIN
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        return fastPow(x, N);
    }

    double fastPow(double x, long long n) {
        if (n == 0) return 1;
        double half = fastPow(x, n / 2);
        if (n % 2 == 0) return half * half;
        return half * half * x;
    }
};

//Short Thought Process: To compute x raised to the power n efficiently, we can use the method of exponentiation by squaring. This method reduces the number of multiplications needed by recursively breaking down the problem. If n is even, we square the result of x raised to n/2. If n is odd, we multiply an additional x to account for the odd exponent. We also handle negative exponents by taking the reciprocal of x and converting n to positive.

//Link: https://leetcode.com/problems/powx-n/⁡