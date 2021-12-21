#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp1, *fp2;
    fp1 = fopen("Helloworld.txt", "r");
    char c;
    while((c=getc(fp1))!=-1)
    {
        putchar(c);
        
        
    }
    fp2 = fopen("sample.txt","w");
    char n[]={"Name: Niladri Shekhar Das\n Stream: ECE\n Roll no:16"};
    fflush(stdin);
    puts(n);
    int i=0;
    while(n[i])
    {
        putc(n[i],fp2);
        i++;
    }
    fclose(fp1);
    fclose(fp2);
}