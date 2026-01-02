def sum (nums,i):
    if(i==0): return nums[i]
    return sum(nums,i-1)+nums[i]
print(sum([1,2,3,4,5],4))