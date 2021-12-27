def hourglassSum(arr):
    ss=[]
    
    for i in range(4):
        for j in range(4):
            sum=0
            for k in range(j,j+3):
                sum=sum+arr[i][k]+arr[i+2][k]
            sum=sum+arr[i+1][j+1]
            ss.append(sum)
    max=ss[0]
    for i in ss:
        if i>max:
            max=i
    return max

cin=[input() for i in range(6)]
ele=[]
arr=[]
for i in cin:
    ele=i.split()
    k=[(int)(ele[j]) for j in range(6)]
    arr.append(k)
print(hourglassSum(arr))

