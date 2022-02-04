import math as mp
def check(n,X):
    #algorithm for finding factors, sum of factors, and other related ops
    #runs in O(n^1/2) time, in constrast to the general O(n) time
    l= (int)(mp.sqrt(n))
    s=0
    for i in range(1,l+1):
        if n%i == 0:
            s=s+i
        if n/i!=i:
            s=s+(int)(n/i)
    
    if s!=X:
        return -1
    else:
        return (int)(n)

def getNum(l):
    X=(int)(l[0]);A=(int)(l[1]);B=(int)(l[2])
    n=(B*X)/A
    print(check(n,X))


t=(int)(input())
l=[input() for i in range(t)]
for i in l:
    getNum(i.split())
