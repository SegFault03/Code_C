//using an integer pointer for int array traversal
#include <stdio.h>

int main()
{
    int n, *p, i=0, j=0;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    int a[n];
    p = a; 
    
    /* The pointer variable p stores the memeory address of the base index (a[0]) of the array, as
    the array variable a is by itself a pointer that stores the base index. {p = a = &a[0]}
    NOTE: A pointer can ONLY store the memory address of a variale or a pointer which ahve the same datatype as itself, and 
    nothing else except NULL. */

    printf("Enter the elements of the array:\n");
    while(i<n)
    {
        scanf("%d", p+i);   //using the pointer to store values inside the array
        i++;
    }

    /*Since a pointer can change the value stored at the memory address that it stores (E.g, if p = 0x001, where
    0x001 is the memory address then scanf("%d", p) will store the assign the value at 0x001, Note: The referencing operator '&'
    is not used to input the value in this case as that will refer to the memory address of the pointer, and not the address where
    the value is to be stored), p in this case is used to fill the array with values by traversing the array using p
    Since an array elements are stored in contigous memory(sequentially, &a[0]=0x001, &a[1]=0x005, &a[2]=0x009...., each index
    gets incremented by 4 bytes as memory required for int = 4 bytes), p+i = a+i = &a[i] when taking input. */

    printf("The array elements are:\n");
    i=0;
    while(i<n)
    {
        printf("%d ", *(p+i));
        i++;
    }

    /* In the same vein as taking input, pointer p is used for printing output by traversing array a. if p = 0x001, *p gives us whatever
    value is stored at 0x001. Again, since array elements are stored in contigous memory, *(p+i) = *(a+i) = a[i] when printing output. */
    return 0;
}