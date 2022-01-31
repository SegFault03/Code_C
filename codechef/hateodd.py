def evaluate():
    n=int(input())
    p=0
    s=0
    nx=input()
    x = [(int)(i) for i in nx.split()]
    for i in x:
        p=p+1
        if (i%2==0):
            s=s+(n-p+1)*p
    return s

t=(int)(input())
x=[]
for i in range(t):
    x.append(evaluate())

for i in x:
    print(i)


