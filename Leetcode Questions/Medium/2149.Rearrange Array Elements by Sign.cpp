class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posArray; 
        vector<int> negArray; 
        for(int k=0;k<nums.size();k++){
            if(nums[k]>0) posArray.push_back(nums[k]);
            else negArray.push_back(nums[k]);
        }
        int size=nums.size();
        int posIndex=posArray.size();
        int negIndex=negArray.size();
        int i=0,j=0,mainIndex=0;
        while(mainIndex!=size){
            if((mainIndex%2)==0) nums[mainIndex++]=posArray[i++];
            else nums[mainIndex++]=negArray[j++];
        }
        return nums;
    }
};

//Optimsed version  
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result(nums.size());
        int posIndex = 0, negIndex = 1;
        
        for (int num : nums) {
            if (num > 0) {
                result[posIndex] = num;
                posIndex += 2;
            } else {
                result[negIndex] = num;
                negIndex += 2;
            }
        }
        return result;
    }
};
