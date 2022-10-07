# cook your dish here
count=0
for i in range(int(input())):
    n=int(input())
    s=(input())
    dec=int(s,2)
    #print(dec)
    #sqr=int(m.sqrt(dec))
    #print("sqr = ",sqr)
    for j in range(len(s)):
        if(s[j]=='1'):
            count+=1
            #print("count = ",count)
        else:
            break 
            
    print(count)
    count=0
    