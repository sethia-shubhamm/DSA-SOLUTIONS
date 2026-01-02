class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]=i+1;
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int find=target-nums[i];
            if(mpp[find]>0 && mpp[find]-1 != i){
                ans.push_back(i);
                ans.push_back(mpp[find]-1);
                break;
            }
        }
        return ans;
    }
};

/* Short Thought Process: We use a map to store the elements and their indices. For each element, we check if the complement (target - current element) exists in the map and is not the same element. If found, we return the indices of the two elements. This approach has a time complexity of O(n) and a space complexity of O(n). */