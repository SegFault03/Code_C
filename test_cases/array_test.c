#include <stdio.h>

void main()
{
    int *a;
    for(int i=0;i<5;i++)
    scanf("%d",a+i);
    for(int i=0;i<5;i++)
    printf("%d",*(a+i));
}