# cook your dish here
n=int(input())
for i in range(n):
    x=int(input())
    f=1
    for j in range(1,x+1):
        f*=j 
    print(f)
        