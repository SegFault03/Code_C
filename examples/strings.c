#include <stdio.h>
struct student
{
    char name[16];
    
};

int main()
{
    int i, j, k;
    struct student pupils[5];
    printf("Enter the particulars\n");
    
    for(i=0;i<3;i++)
    {
        printf("\nEnter the particulars of student %d", i+1);
        printf("\nEnter the name, letter by letter");
        
        scanf("%s", &pupils[i].name);
        
    }
    for(i=0;i<3;i++)
    {
        
        
        if(pupils[i].name[0]=='a')
         k=1;
        
        if(k==1)
        {
            printf("pupil no.%d has a name which starts with A", i+1);
        }
        k= 0;   
    }
        
}