#include <stdio.h>

void main()
{
    int *a[3][3],i,j,n;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",*(*(a+i)+j));
        }
    }
}