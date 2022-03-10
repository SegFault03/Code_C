#include <stdio.h>
#include <string.h>

int main()
{
    char ar[20];
   // printf("Enter the string\n");
   // scanf("%[^\n]", ar);
    
    char ar2[20];
    char ar3[20];
    printf("Enter the string 2");
    //scanf("%[^\n", ar2);
    fgets(ar2, 20, stdin);
    puts(ar2);
    printf("Enter the string 1\n");
    fgets(ar2, 20, stdin);
    puts(ar);
    puts("Enter string 3");
    fgets(ar3, 20, stdin);

    printf("\n%s", ar);
   // printf("\n%s", strrev(ar2));
}