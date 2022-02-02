
def execute(k):
    l = [(int)(i) for i in k[0].split()]
    s = l[0]+l[1]+l[2]
    tv = l[3]+l[4]+l[5]
    temp=0
    c=0
    if(s<tv/2):
        for i in range(3,6):
            temp=s-l[i-3]
            temp=temp+l[i]
            if temp>tv/2:
                c=1
                break
    else:
        c=1
    if c==0:
        print("NO")
    else:
        print("YES")

t=(int)(input())
li = [[input()]for i in range(t)]
for i in li:
    execute(i)

