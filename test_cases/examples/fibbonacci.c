#include <stdio.h>
int main()
{
    int a, b, c, n, i;
    a=c=i=0;
    b=1;
    printf("Enter the range\n");
    scanf("%d", &n);
    printf("0\t1\t");
    while (i<=(n-2))
    {
        c = a+b;
        printf("%d\t", c);
        a = b;
        b = c;
        i++;
    }
    return 0;

    
}
