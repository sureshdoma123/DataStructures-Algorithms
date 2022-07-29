#Number of prime numbers in an array 
#Seive of eranthosis

from math import sqrt
n=100000
prime=[1]*(n+1)
def seive_eranthosis():
    prime[0],prime[1]=0,0
    for i in range(2,int(sqrt(n))):
        if prime[i]==1:
            for j in range(i*i,n+1,i):
                prime[j]=0
seive_eranthosis()
for _ in range(int(input())):
    p=int(input())
    arr=[int(i) for i in input().split()]
    cnt=0
    for i in arr:
        if prime[i]:
            cnt+=1
    print(cnt)
