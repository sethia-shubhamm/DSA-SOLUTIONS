class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int l=0,h=n;
        while(l<n){
            ans.push_back(nums[l++]);
            ans.push_back(nums[h++]);
        }
        return ans;
    }
};