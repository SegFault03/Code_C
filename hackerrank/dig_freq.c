#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char a[1000],t;
    int i=0,r=0,as=0;
    scanf("%s",a);
    fflush(stdin);

    int f[10];
    while(i<10)
    {
        f[i]=0;
        i++;
    }
    i=0;
    while(a[i])
    {
        t=a[i];
        as = (int)t;
        if(as>=48&&as<=57)
        f[as-48]++;
        i++;
    } 
    i=0;
    while(i<10)
    {
        printf("%d ",f[i]);
        i++;
    }  
    return 0;
}
