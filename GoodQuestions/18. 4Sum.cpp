class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        
        for(int i = 0; i < n - 3; i++) {
            // Skip duplicates for i
            if(i > 0 && nums[i] == nums[i-1]) continue;
            
            for(int j = i + 1; j < n - 2; j++) {
                // Skip duplicates for j
                if(j > i + 1 && nums[j] == nums[j-1]) continue;
                
                int k = j + 1;
                int l = n - 1;  // Index, not value!
                
                while(k < l) {
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    
                    if(sum == target) {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                        
                        // Skip duplicates for k
                        while(k < l && nums[k] == nums[k-1]) k++;
                        // Skip duplicates for l
                        while(k < l && nums[l] == nums[l+1]) l--;
                    }
                    else if(sum < target) {
                        k++;
                    }
                    else {
                        l--;
                    }
                }
            }
        }
        
        return ans;
    }
};

//Short Thought Process: To solve the 4Sum problem, we first sort the input array to facilitate the two-pointer technique. We then use two nested loops to fix the first two numbers and apply the two-pointer approach to find pairs that sum up to the remaining target. We ensure to skip duplicates at each step to avoid repeating quadruplets in the result. The overall time complexity is O(n^3) due to the nested loops and two-pointer traversal.

//Link: https://leetcode.com/problems/4sum/