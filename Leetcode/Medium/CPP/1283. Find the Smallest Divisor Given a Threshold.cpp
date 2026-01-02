class Solution {
public:

    bool isValid(vector<int>& nums, int threshold,int div){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum += ceil((double)nums[i] / div);

        }
        return (sum<=threshold);
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int min=1;
        int max=*max_element(nums.begin(),nums.end());
        int ans=-1;
        while(min<=max){
            int mid=min+(max-min)/2;
            if(isValid(nums,threshold,mid)) {
                ans=mid;
                max=mid-1;
            }
            else min=mid+1;
        }
        return ans;
    }
};