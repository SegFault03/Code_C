#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    fp1 = fopen("integers.txt", "w");
    int i=1;
    int c,n;
    char k = getchar();
    n = (int)k;

    while(i<=n)
    {
        putw(i, fp1);
        i++;
    }
    fclose(fp1);
    fp1 = fopen("integers.txt", "r");
    while((c=getw(fp1))!=-1)
    {
       printf("%d\t", c);
    }
    fclose(fp1);
    fp1 = fopen("integers.txt", "r");
    fp2 = fopen("odd.txt","w");
    fp3 = fopen("even.txt", "w");
    while((c=getw(fp1))!=-1)
    {
        if(c%2==0)
        putw(c, fp3);
        else
        putw(c, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fp2 = fopen("odd.txt","r");
    fp3 = fopen("even.txt","r");
    fflush(stdin);
    puts("The even numbers are:\n");
     while((c=getw(fp3))!=-1)
    {
        printf("%d\t", c);
    }
    fflush(stdin);
    puts("The odd numbers are:\n");
    while((c=getw(fp2))!=-1)
    {
        printf("%d\t", c);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}