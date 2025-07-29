class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
       int low=0,high=nums.size()-1;
       int lowVal=-1,highVal=-1;
        int mid=low+(high-low)/2;
        while(low<=high){
            if(nums[mid]==target){
                high=mid-1;
                lowVal=mid;
            }
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
            mid=low+(high-low)/2;
        } 
        low=0,high=nums.size()-1;
        mid=low+(high-low)/2;
        while(low<=high){
            if(nums[mid]==target){
                low=mid+1;
                highVal=mid;
            }
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
            mid=low+(high-low)/2;
        } 
        ans.push_back(lowVal);
        ans.push_back(highVal);
        return ans;
    }
};

//using stl
class Solution2 {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto left = lower_bound(nums.begin(), nums.end(), target);
        if (left == nums.end() || *left != target) {
            return {-1, -1};
        }
        auto right = upper_bound(nums.begin(), nums.end(), target) - 1;
        return {(int)(left - nums.begin()), (int)(right - nums.begin())};
    }
};