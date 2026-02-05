n=int (input("Enter the number: ")) #took input(always str) converted to int
n=str(n) #converted to str
for i in n:
    print (i, end=" ")
    
#alternate:
n=int(input("Enter the number: "))
print (n)
while n!=0:
    print (n%10)
    n=n//10
    

