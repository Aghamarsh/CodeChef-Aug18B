# cook your dish here
import math

t=int(input())

for _ in range (t):
    a, b, n = list(map(int,input().split(" ")))
    
    dif=a-b
    
    if (dif==0):
        r=pow(a,n,1000000007)
        r=(r*2)%1000000007
        print(r) 
    else :
        ap=pow(a,n,dif)
        bpo=pow(b,n,dif)
        p=(ap+bpo)%dif
        
        r=math.gcd(p,dif)%1000000007
        print(r) 
        