class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; 
            int l = i + 1, h = nums.size() - 1;
            while (l < h) {
                int sum = nums[i] + nums[l] + nums[h];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[l], nums[h]});
                    while (l < h && nums[l] == nums[l + 1]) l++; 
                    while (l < h && nums[h] == nums[h - 1]) h--; 
                    l++;
                    h--;
                } else if (sum < 0) {
                    l++;
                } else {
                    h--;
                }
            }
        }
        return ans;
    }
};

// Short Thought Process: To solve the 3Sum problem, we first sort the input array to facilitate the two-pointer technique. We then iterate through the array, fixing one element at a time and using two pointers to find pairs that sum up to the negative of the fixed element. We ensure to skip duplicates to avoid repeating triplets in the result. The overall time complexity is O(n^2) due to the nested loops and two-pointer traversal. 

//Link: https://leetcode.com/problems/3sum/