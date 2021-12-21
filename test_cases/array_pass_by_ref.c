//using pointer as an array

#include <stdio.h>
#include <stdlib.h>

void input(int *a, int n)/*passing the base address of the array a defined in main to the pointer a declared as 
                           a formal parameter*/
{
    for(int i=0;i<n;i++)
    scanf("%d",a+i);
}

void swap(int *a, int *b, int *c, int *d)
{
    int t;
    t = *b;
    *b=*c;
    *c=t;
    a[0]=*d;
}

void main()
{
    int n,b,c,i=0;
    scanf("%d",&n);
    int *a;/*declaring a pointer which will later be used as an array. Each time a pointer is created, it does not store NULL,
            but points to a random memory location, which, if desired, can be made the base address of an array. This 
            allows us to perform static memory allocation of an array without even knowing the number of elements*/
    input(a,n);/*passing the base adress of the array, as that is the value that is stored inside the array variable a,
                 which by itself is an integer pointer pointing at the base index of the array*/    
    
    char *k="NILADRI";/*in this particular case, a character pointer is declared, that is immediately used to store a 
                      string in terms of a character array.This can only be used to store strings DIRECTLY, however.*/
    
    printf("\n%s\n",k);//note how the dereferencing operator '*' is not used to print the string while using the %s specifier.

    for(int i=0;i<n;i++)
    printf("%d\t",*(a+i));
    b=a[0];
    c=a[1];
    swap(a,&b,&c,&a[3]);
    printf("\n\n%d %d %d",b,c,a[0]);
    int *o={1,2,3,4,5};
}