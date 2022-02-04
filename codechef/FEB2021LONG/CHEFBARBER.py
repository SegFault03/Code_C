def execute(l):
    N=(int)(l[0]);M=(int)(l[1])
    print(N*M)

t=(int)(input())
l = [input() for i in range(t)]
for i in l:
    execute(i.split())


