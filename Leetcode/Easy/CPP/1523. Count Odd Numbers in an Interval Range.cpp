class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            if(i%2!=0) count++;
        }
        return count;
    }
};

// Short Thought Process: To count the odd numbers in a given interval [low, high], we iterate through each number in the range and check if it is odd by using the modulus operator. If a number is odd, we increment our count. Finally, we return the total count of odd numbers found in the interval.

//Link: https://leetcode.com/problems/count-odd
// -numbers-in-an-interval-range/