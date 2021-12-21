#include <stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    char arr[100];
    printf("%d",sprintf(arr,"%d",n));
    printf("%d",strlen(itoa(n,arr,10)));
}