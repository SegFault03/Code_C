#include <stdio.h>
#include <stdlib.h>

void display();

typedef struct temp
{
    int *row;
    struct temp *col;
    int no;
}matrix;

matrix *head, *p;

void insert(matrix *t)
{
    int n;
    printf("\nEnter the number of elements:- ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements:- ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    t->row=a;
    t->no=n;
}

matrix* create()
{
    matrix *t = (matrix*)malloc(sizeof(matrix));
    insert(t);
    t->col=NULL;
    return(t);
}


void display()
{
    printf("\nThe matrix is:\n");
    int n;
    p=head;
    while(p!=NULL)
    {
        n=p->no;
        for(int i=0;i<n;i++)
        printf("%d\t",*((p->row)+i));
        printf("\n");
        p=p->col;
    }
}

void main()
{
    int r;
    matrix *t;
    printf("Enter the number of rows:- ");
    scanf("%d",&r);
    head=create();
    p=head;
    for(int i=1;i<r;i++)
    {
        t=create();
        p->col=t;
        p=t;
    }
    display();
}