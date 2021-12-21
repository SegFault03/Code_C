#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i=0,s=0;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int *a = (int*)malloc(n*sizeof(int));  
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d ", a+i);
        s = s + *(a+i);
        
    }
    printf("\n%d",s);
}