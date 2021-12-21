//sorting algorithm for a fixed size array which sorts the array during input, in ascending order; based on insertion in an array

#include <stdio.h>
void sort();

int main(void) {
int n,i=0,j=0,t=0,m=0;
scanf("%d",&n);
int a[n];
scanf("%d",&a[0]);
for(i=1;i<n;i++)
{
    scanf("%d",&t);
    for(j=0;j<=i;j++)
    {
        if(a[j]>t)
        break;
    }
    if(j==i+1)
    a[j-1]=t;
    else
    sort(a,j,n,t);
}
for(i=0;i<n;i++)
printf("%d\n",a[i]);

return 0;
}

void sort(int *a,int j,int n, int t)
{
    int m=0;
    for(m=n-1;m>=j+1;m--)
    a[m]=a[m-1];
    a[j]=t;
}
