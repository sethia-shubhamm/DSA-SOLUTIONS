arr=[1,2,4,3,1,2,4,5,1,4,2,6]
freq={}
for i in arr:
    freq[i]=freq.get(i,0)+1
print(freq)