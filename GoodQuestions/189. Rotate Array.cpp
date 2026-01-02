class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // handle k > n
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};

/* Short Thought Process: To rotate the array to the right by k steps, we first handle cases where k is greater than the array size by taking k modulo n. Then, we reverse the entire array, reverse the first k elements, and finally reverse the remaining elements. This effectively rotates the array in-place. */