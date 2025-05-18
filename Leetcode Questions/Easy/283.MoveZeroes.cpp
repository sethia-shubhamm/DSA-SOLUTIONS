class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
      for(int i=0;i<nums.size()-1;i++){
        if(nums[i]!=0) j++;
        if(nums[i+1]!=0 && (i+1)!=nums.size() &&j<nums.size() &&nums[j]==0){
            swap(nums[j],nums[i+1]);
            j++;
        }
        
      }  
    }
};