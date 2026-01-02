class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int ps=0,ng=1;
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0) {ans[ps]=nums[i]; ps=ps+2;}
            else {ans[ng]=nums[i]; ng=ng+2;}
        }
        return ans;
    }
};

//* Short Thought Process: We iterate through the input array and place positive numbers at even indices and negative numbers at odd indices in a new array. We maintain two pointers, one for the next positive position and one for the next negative position, and increment them by 2 each time we place a number. This approach ensures that the resulting array has alternating positive and negative numbers. The time complexity is O(n) and the space complexity is O(n). */

