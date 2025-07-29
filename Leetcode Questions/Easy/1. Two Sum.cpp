class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int checkVal=(target-nums[i]);
            if(hash.find(checkVal)!=hash.end() && hash[checkVal]!=i){
                ans.push_back(i);
                ans.push_back(hash[checkVal]);
                break;
            }
        }
        return ans;
    }
};