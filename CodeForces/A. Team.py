#Link: https://codeforces.com/problemset/problem/231/A

n=int(input())
attempt=0
for i in range (0,n):
    count=0
    if(input()=='1'): count+=1
    if(input()=='1'): count+=1
    if(input()=='1'): count+=1
    if(count>=2): attempt+=1
print(attempt)