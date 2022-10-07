# cook your dish here
for i in range(int(input())):
    a,b,x,y=map(int,input().split())
    a=a/x 
    b=b/y 
    if(a<b):
        print("Chef")
    elif (a==b):
        print("Both")
    elif(a>b):
        print("Chefina")