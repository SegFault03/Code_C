#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char name[50];
    int roll;
    int marks[3];
    int total;
}S;

int main()
{
    int i, j, max = 0, k, mar=0;
    S pupils[3];
    printf("Enter the particulars\n");
    
    for(i=0;i<3;i++)
    {
        printf("\nEnter the particulars of student %d", i+1);
        printf("\nEnter the name");
        scanf("%s", &pupils[i].name);
        printf("\nEnter roll");
        scanf("%d", &pupils[i].roll);
        printf("\nEnter marks");
        for(j=0;j<3;j++)
        {
            printf("\nEnter marks of subject %d", j+1);
            scanf("%d", &(pupils[i].marks[j]));
        }
    }
    
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
        {
            mar = mar+pupils[i].marks[j];
        }
        pupils[i].total = mar;
        mar = 0;

    }
    
    max = pupils[0].total;
    for(i=0;i<3;i++)
    {
        if(pupils[i].total>max)
        {
            max = pupils[i].total;
            k = i;
        }
    }
    for ( i = 0; i < 50; i++)
    {
        if(pupils[0].name[0]=='a')
        printf("%s", pupils[0].name);
    }
    

    printf("%s is the student with the highest marks with a total of %d", pupils[k].name, max);

}