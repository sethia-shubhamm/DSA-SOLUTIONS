class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()==0) return 0;
        int pos=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[pos]) swap(nums[++pos],nums[i]);
        }
        return pos+1;
    }
};

/* Short Thought Process: Since the array is sorted, duplicates will be adjacent. We maintain a pointer 'pos' to track the position of the last unique element found. As we iterate through the array, whenever we find a new unique element, we increment 'pos' and swap the current element with the element at 'pos'. Finally, we return 'pos + 1' as the count of unique elements. */