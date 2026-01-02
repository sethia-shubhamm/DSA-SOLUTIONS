arr=[1,10,2,9,4,5,1,2]
max=-10**100
sec_max=-10**100
for i in arr:
    if (i>max):
        secMax=max
        max=i
    elif (i>secMax and i!=max):
        secMax=i
    else: continue
print (max,secMax)        