# Link: https://codeforces.com/problemset/problem/71/A

n=int(input())
for i in range (0,n):
    inp_str=input()
    if(len(inp_str))<=10: print(inp_str)
    else:
        print(inp_str[0]+str(len(inp_str)-2)+inp_str[len(inp_str)-1])
