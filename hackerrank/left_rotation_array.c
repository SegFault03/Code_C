#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,d,i,c=0,k=0,s;
    char in[4];
    gets(in);
    fflush(stdin);
    n = (int)in[0]-48;
    d = (int)in[2]-48;
    int a[n],b[n];
    char *ia=(char*)malloc((2*n-1)*sizeof(char));
    gets(ia);
    for(i=0;i<n;i++)
    {
        a[i]=(int)ia[c]-48;
        c+=2;
    }
    if(d>n)
    d-=n;
    for(i=0;i<n;i++)
    {
        if(i<d)
        b[i+(n-d)]=a[i];
        else
        b[i-d]=a[i];
    }
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
}