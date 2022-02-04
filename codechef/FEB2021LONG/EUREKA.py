import math as mp
Fn=0
t=(int)(input())
l = [(int)(input()) for i in range(t)]
for i in l:
    Fn=mp.pow(0.143*i,i)
    if Fn-mp.floor(Fn)<0.5:
        print(mp.floor(Fn))
    else:
        print(mp.floor(Fn)+1)