class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> hash;
        for(int i=0;i<nums.size();i++) hash[nums[i]]++;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(hash[nums[i]]==1) continue;
            else {
                int n=hash[nums[i]];
                ans+=(n*(n-1)/2);
                hash[nums[i]]=1;
            }
        }
        return ans;
    }
};

//formula for good pairs: n*(n-1)/2