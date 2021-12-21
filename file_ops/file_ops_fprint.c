#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp1;
    fp1 = fopen("students.txt", "w");
    char name[20];
    int roll=0, n, i=1;
    //fprintf(stdout,"%s", "HEHE");
    //fprintf(fp1,"%s\t%s\n", "STUDENTS","Roll no.");
    printf("How many students' data do you want to enter?\n");
    scanf("%d", &n);
    fprintf(fp1,"%s\t%s\n", "STUDENTS","Roll no.");
    while(i<=n)
    {
        fprintf(stdout,"Enter the students name with roll no.\n");
        fscanf(stdin, "%s %d", name, &roll);
        fprintf(fp1,"%s\t%d\n", name, roll);
        i++;
    }
    fclose(fp1);
   int ch;
    fp1 = fopen("students.txt", "r");
    while((fscanf(fp1, "%s\t%d",name, &roll ))!=-1)
    {
        printf("%s\t%d\n", name, roll);
    }
}