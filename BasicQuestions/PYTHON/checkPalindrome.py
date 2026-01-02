n=int(input("Enter n: "))
x=n
rev=0
while x>0:
    dig=x%10
    rev=(rev*10)+dig
    x=x//10
if (rev==n): print("true")    
else: print("false")