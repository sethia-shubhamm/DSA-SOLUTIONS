arr1 = [1,1,1,2,3,4,4,5,6,7]
arr2 = [1,2,3,4,5,6,7,8,9,9,9,9,9,9]

i = 0
j = 0
ans = []

while i < len(arr1) and j < len(arr2):
    if arr1[i] < arr2[j]:
        if not ans or ans[-1] != arr1[i]:  # More efficient duplicate check
            ans.append(arr1[i])
        i += 1
    elif arr1[i] > arr2[j]:
        if not ans or ans[-1] != arr2[j]:
            ans.append(arr2[j])
        j += 1
    else:  # arr1[i] == arr2[j]
        if not ans or ans[-1] != arr1[i]:
            ans.append(arr1[i])
        i += 1
        j += 1

# Add remaining elements from arr1
while i < len(arr1):
    if not ans or ans[-1] != arr1[i]:
        ans.append(arr1[i])
    i += 1

# Add remaining elements from arr2
while j < len(arr2):
    if not ans or ans[-1] != arr2[j]:
        ans.append(arr2[j])
    j += 1

print(ans)  # Output: [1, 2, 3, 4, 5, 6, 7, 8, 9]