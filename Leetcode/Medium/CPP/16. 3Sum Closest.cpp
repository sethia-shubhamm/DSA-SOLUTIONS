class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int diff=INT_MAX;
        for(int i=0;i<nums.size()-2;i++){
            int l=i+1;
            int h=nums.size()-1;
            while(l<h){
                int sum=nums[i]+nums[l]+nums[h];
                if(diff>abs(sum-target)) {diff=abs(sum-target); ans=sum;}
                if(sum==target) return target;
                else if(sum<target) l=l+1;
                else h=h-1;
            }
        }
        return ans;
    }
};