def evaluate(l):
    li = [(int)(i) for i in l.split()]
    I = li[1];T=li[0]
    ns1=2*I-1
    if T>I:
        ns1=ns1+(T-I)+1
    print(ns1)

t= (int)(input())
l = [input() for i in range(t)]
for i in l:
    evaluate(i)
