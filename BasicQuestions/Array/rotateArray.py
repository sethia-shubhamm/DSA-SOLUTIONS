arr=[1,2,3,4,5] 
arr.reverse() 
k=1 
rev1=arr[k-1::-1]+arr[:k-1:-1]
print(rev1)