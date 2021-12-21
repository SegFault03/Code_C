

#include <stdio.h>

//Compiler version gcc  6.3.0
int main()
{
    int i=2, n,c=0,j;
    printf("enter the range\n");
    scanf("%d", &n);
    while(i<=n)
    {
       for(j=1;j<=i;j++) 
        {
           if(i%j==0)
             c++;
         } 
        if(c==2) 
        printf("%d\t",i);    
        c=0;
        i++;
     }
}
