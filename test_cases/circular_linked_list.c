#include <stdlib.h>
#include <stdio.h>
typedef struct link_list
{
   int data;
   struct link_list *adr;
}Node;

Node* create_node( int c)
{
    Node *temp = (Node*)malloc(sizeof(Node));
    printf("\nEnter data of node #%d:\t", c);
    scanf("%d", &temp->data);
    temp->adr = NULL;
    return(temp);
}

    int main()
{
    Node *head, *temp, *f;
    int n, i=0,ch, in=0;
    printf("\n How many nodes do you want to create?\t");
    scanf("%d", &n);
    while(i<n)
    {
        f = create_node(i+1);
        if(i==0)
        {
            head = f;
            temp = head;
        }
        else
        {
            temp->adr = f;
            temp = f;
        }
        i++;
    }
    temp->adr=head;
    temp = head;
    printf("\nThe nodes are:\n");
    do
    {
        printf("%d\t", temp->data);
        temp = temp->adr;
    }while(temp!=head);

}