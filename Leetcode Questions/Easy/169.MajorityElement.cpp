//using hash map (space O(n))
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=floor(nums.size()/2);
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(hash[nums[i]]>n) return nums[i];
        }
        return 0;
    }
};
//using Boyer-Moore Voting Algorithm (space O(1))
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int target = 0; 
        for(int i = 0; i < nums.size(); i++) {
            if(count == 0) {
                target = nums[i];
                count = 1;
            } else if(nums[i] == target) {
                count++;
            } else {
                count--;
            }
        }
        return target;
    }
};
