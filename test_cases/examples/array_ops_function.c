#include <stdio.h>
void sort(int ar[], int n);
void insert(int ar[], int n);
void delete(int ar[], int n);
 
 int main()
{
    int n, i;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    int a[n], k;
    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
   printf("\nEnter 1 for sorting, 2 for insertion, 3 for deletion");
   scanf("%d", &k);
   switch(k)
   {
       case 1:
       sort(a, n);
       break;

       case 2:
       insert(a, n);
       break;

       case 3:
       delete(a, n);
       break;

       default:
       printf("\nA proper value must be given ");
       break;
   }

}

void sort(int ar[], int n)
{
    int i, j, t=0;
    for(i=0;i<(n-1);i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if(ar[j]<ar[i])
            {
                t = ar[j];
                ar[j] = ar[i];
                ar[i] = t;
            }
        }
        
    }
    printf("\n The sorted array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t", ar[i]);
    }
}

void insert(int ar[], int n)
{
    int i, k, a;
    printf("\nEnter the position at which you want to enter an element, followed by the number");
    scanf("%d%d", &k, &a);
    for(i=n-1;i>k-1;i--)
    {
        ar[i] = ar[i-1];
    }
    ar[k-1] = a;
    printf("The new array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t", ar[i]);
    }
}

void delete(int ar[], int n)
{
    int i, k;
    printf("\nEnter the position at which you want to delete an element");
    scanf("%d", &k );
    for(i=k-1;i<n-1;i++)
    {
        ar[i] = ar[i+1];
    }
    ar[n-1] = 0;
    printf("The new array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t", ar[i]);
    }
}

