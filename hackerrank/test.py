def dynamicArray(n, queries):
    lastAnswer=0
    ans=[]
    idx=0
    arr = [[] for i in range(n)]
    for i in queries:
        k=i.split();
        x=(int)(k[1])
        y=(int)(k[2])
        q=(int)(k[0])
        idx=(x^lastAnswer)%n
        if q==1:
            arr[idx].append(y)
        else:
            lastAnswer=arr[idx][y%len(arr[idx])]
            ans.append(lastAnswer)
    return ans

cin=[]
cin.append(input())
k=cin[0].split()
nq=(int)(k[1])
q=[]
for i in range(nq):
    q.append(input())
for i in (dynamicArray((int)(k[0]),q)):
    print(i)