class Solution {
public:

    bool canBe(vector<int>& nums, int days, int maxWeight){
        int count=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if((sum+nums[i])<=maxWeight) sum+=nums[i];
            else{
                sum=nums[i];
                count++;
            }
        }
        return (count<=days);
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(int i=0;i<weights.size();i++) high+=weights[i];
        int mid,ans=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(canBe(weights,days,mid)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};