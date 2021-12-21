#include <stdio.h>
void main()
{
    int ar[2][3];
    int k,l, *p;
    printf("Enter the elements for the array\n");
    for ( k = 0; k < 2; k++)
    {
          for ( l = 0; l < 3; l++)
          {
              scanf("%d", (*(ar+k)+l));
              
          }
          
            
     }
    printf("The array elements are:\n");
    for ( k = 0; k < 2; k++)
    {
        for (l  = 0; l < 3; l++)
        {
             printf("%d\t", *(*(ar+k)+l));
        }
        printf("\n");
        
       
    }
    
    
}