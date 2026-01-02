class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int ind=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind=i;
                break;
            }
        }
        if(ind==-1){
            reverse(nums.begin(),nums.end());
            return ;
        }
        for(int i=n-1;i>ind;i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1,nums.end());
    }
};

// Short Thought Process: To find the next permutation, we first identify the rightmost pair of consecutive elements where the left element is smaller than the right. This indicates where we can make a change to get a larger permutation. We then find the smallest element to the right of this position that is larger than this element, swap them, and finally reverse the sequence after the original position to get the next permutation in lexicographical order.

//Link: https://leetcode.com/problems/next-permutation/