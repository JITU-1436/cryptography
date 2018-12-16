from array import*
a = []
b = []
c = []
n1 = input("enter the number  of term in 1st poly")
n2 = input("enter the number  of term in 2nd poly")
n1 = int(n1)
n2 = int(n2)
print("enter the 1st poly")
for i in range(n1):
    x = int(input())
    a.append(x)
print("enter the 2nd poly")
for i in range(n2):
    y = int(input())
    b.append(x)

#for i in range(100):
 #   c[i] =0
for i in range(n1):
    for j in range(n2):
        c[i+j] += a[i] * b[j]

        


