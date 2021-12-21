#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int print(int );

int print(int b)
{
    int n=(b*2)-1;
    int i=1;
    while(i<=n)
    {
        printf("%d ",b);
        i++;
    }
    return(n);
}

int main() 
{

    int n,k,m,i,j,l,v=0;
    scanf("%d", &n);
    k=n;
    m = (n*2)-1;
    i=1;
    while(i<=m)
    {
        for(j=n;j>k;j--)
        printf("%d ",j);
        v=print(j);
        if(v!=m)
        {
            l=j+1;
            while(l<=n)
            {
                printf("%d ",l);
                l++;
            }
        }   
        printf("\n");
        if(i>=n)
        k++;
        else
        k--;
        i++;
    }
    return 0;
}

