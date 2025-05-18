//optimised solution
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // handle k > n

        // Step 1: reverse entire array
        reverse(nums.begin(), nums.end());

        // Step 2: reverse first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Step 3: reverse the rest
        reverse(nums.begin() + k, nums.end());
    }
};
