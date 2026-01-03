class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x ^ y, count = 0;
        while (n > 0) {
            count += (n & 1);
            n >>= 1;
        }
        return count;
    }
};

//link: https://leetcode.com/problems/hamming-distance/description/