#include <stdio.h>
//implementation of a string array in C using a 2D char array and fgets() function
int main()
{
    char s[5][10];
    for(int i=0;i<5;i++)
    fgets(s[i],10,stdin);
    for(int i=0;i<5;i++)
    printf("%s\n",s[i]);
}