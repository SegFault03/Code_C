#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    char n;
    struct Node *next;
}Node;

int MAX,c;
Node *top;

Node* create()
{
    char n;Node *temp;
    printf("Enter the data:\n");
    scanf(" %c", &n);
    temp = (Node*)malloc(sizeof(Node));
    temp->n=n;
    temp->next=NULL;
    return temp;
}

void push()
{
    Node *t=NULL;
    if(top!=NULL)
    {
        t=create();
        t->next=top;
        top=t;
        c++;
    }
    else if(top==NULL)
    {
        top=create();
        c++;
    }
    else
    printf("\nThe stack is full");
}

char pop()
{
    if(top!=NULL)
    {
        printf("\n%d\nItem popped",top->n);
        Node *t=top;
        top=top->next;
        c--;
        free(t);
    }
    else
    printf("\nStack is empty!");
}

int isFull()
{
    if(c==MAX)
    return 1;
    else
    return 0;
}

int isEmpty()
{
    if(c==0)
    return 1;
    else
    return 0;
}

char peek()
{
    return top->n;
}

void display()
{
    Node *t=top;
    printf("\n");
    while(t)
    {
        printf("%c\t",t->n);
        t=t->next;
    }
}


