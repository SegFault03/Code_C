#include <stdio.h>
//pointers are used to store the adress of a variable
//program to demonstrate pointer ops
int main()
{
     int a = 5, b;
     int *p, *k;//syntax for declaring a pointer; assignment and declaration can be done in the same statement
     p = &a;//initializing the pointer to store the adress of variable 'a' using the & operator
     printf("%p",p);//%p is used as a pointer specifier, will give adress of a in hex code
     printf("\n%d", *p);//using * will treat pointer as the variable of whose adress it stores, and both can
                        //be used interchangeably
     a+=5;
     printf("\n%d\n", *p);
     *p+=10;
     printf("%d", *p);
     k = &b;
     printf("p");
     scanf("%d", k);
     printf(" p is %d", *k);
     
}