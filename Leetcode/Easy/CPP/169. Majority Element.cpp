class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1,currElement=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==currElement) count++;
            else count--;
            if(count==0){
                currElement=nums[i];
                count=1;
            }
            
        }
        return currElement;
    }
};

//* Short Thought Process: We implement the Boyer-Moore Voting Algorithm to find the majority element in the array. We maintain a count and a current candidate for the majority element. As we iterate through the array, we increase the count when we see the same element and decrease it when we see a different one. When the count reaches zero, we update our candidate to the current element. By the end of the iteration, the candidate will be the majority element. This approach runs in O(n) time and O(1) space. */

//Boyer-Moore Voting Algorithm