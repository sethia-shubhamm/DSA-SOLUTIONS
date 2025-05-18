class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v;
        int tempSize=1;
        v.push_back(nums[0]);
        for(int i=0;i<nums.size();i++){
            if(v[tempSize-1]!=nums[i]){
                v.push_back(nums[i]);
                tempSize++;
            }
        }
        nums=v;
        return v.size();
    }
};

//optimised for space
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int j = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[j - 1]) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};