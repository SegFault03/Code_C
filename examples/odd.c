#include <stdio.h>
//Compiler version gcc  6.3.0
main()
{    
    int i=1, n;
    printf("enter the range\n");
    scanf("%d", &n);
    while(i<=n)
    {
        if(i%2!=0)
        {
           if((i+2)>n)
           printf("%d",i);
           else
           printf("%d,",i);
        
        }
        i++;
     }
}

