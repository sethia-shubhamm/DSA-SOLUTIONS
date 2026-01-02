def rev (arr,i,e):
    if (i>=e): return arr
    arr[i],arr[e]=arr[e],arr[i]
    i+=1
    e-=1
    return rev(arr,i,e)
print(rev([1,2,3,4,5],0,4))