class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(maxSum<sum) maxSum=sum;
            if(sum<0) sum=0;
        }
        return maxSum;
    }
};

//* Short Thought Process: We use Kadane's Algorithm to find the maximum subarray sum. We maintain a running sum of the current subarray and update the maximum sum whenever the running sum exceeds it. If the running sum becomes negative, we reset it to zero, as starting a new subarray from the next element could yield a higher sum. This approach runs in O(n) time and O(1) space. */

//Kadane's Algorithm