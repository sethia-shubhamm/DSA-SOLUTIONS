class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                if(maxCount<count) maxCount=count;
                count=0;
            }
            else count++;
        }
        return (maxCount>count)?maxCount:count;
    }
};

/* Short Thought Process: We iterate through the array while maintaining a count of consecutive 1s. Whenever we encounter a 0, we compare the current count with the maximum count recorded so far and reset the current count. At the end of the iteration, we return the maximum of the recorded maximum count and the current count to account for cases where the array ends with 1s. This approach has a time complexity of O(n) and a space complexity of O(1). */