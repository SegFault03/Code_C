#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);//reads only one character
    if(a==1)
    {
        scanf("%d %d",&b,&c);//doesn't need to take input as inputs already present in stream
    }
    printf(" %d %d %d",a,b,c);
}