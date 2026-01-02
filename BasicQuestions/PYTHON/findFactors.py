from math import *
n=int(input("Enter n: "))
for i in range (1,int(sqrt(n))):
    if(n%i==0):
        print(i,n//i)