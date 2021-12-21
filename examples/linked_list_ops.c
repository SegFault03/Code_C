#include <stdio.h>
#include <stdlib.h>


void print_node();
void print_reverse();
void insertion();
void deletion();
void search();

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
    
    print_node(head);
    printf("\n-------------------------------------------");
    printf("\nLinked list in reverse order:\t");//for printing in reverse order
    print_reverse(head);
    printf("\n-------------------------------------------");
    printf("\nDo you want to insert,delete or search? Press 1 for insertion, 2 for deletion, 3 for searching and 0 for none\t");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        for(;;)
        {
             printf("\nEnter the position of the node after which you want to insert:-\t");
             scanf("%d", &in);
             insertion(head, in);
             print_node(head);
             printf("\nDo you want to continue? Press 1 for Yes, 0 for No");
             scanf("%d", &ch);
             if(ch==0)
             break;
        }
        
        break;
    
    case 2:
        for(;;)
        {
             printf("\nEnter the position of the node which you want to delete:-\t");
             scanf("%d", &in);
             if(in==1)
             {
                 head = head->adr;
                 print_node(head);
                 break;
             }
             deletion(head, in);
             print_node(head);
             printf("\nDo you want to continue? Press 1 for Yes, 0 for No");
             scanf("%d", &ch);
             if(ch==0)
             break;
        }
        
        break;
    
    case 3:
        search(head);
        break;

    default:
        break;
    }
    return 0;
}

void print_node(Node *temp)//core function for printing in normal order
{
    printf("\n-------------------------------------------");
    printf("\n The linked list in normal order is:\t");
    while(temp!=NULL)
    {
        printf("%d,", temp->data);
        temp = temp->adr;
    }

}

void print_reverse(Node *temp)//core function for printing in reverse order
{
    if(temp==NULL)
    return;
    else
    {
        print_reverse(temp->adr);
        printf("%d,", temp->data);
    }
}

void insertion(Node *temp, int n)//core function for inserting a node
{
    Node *f, *s;
    int c=0;
    
    while(temp!=NULL)
    {
        c++;
        if(c==n)
        {
            s = temp->adr;
            break;
        }
        temp = temp->adr;
    }

    f = create_node(n+1);
    temp->adr = f;
    temp = f;
    temp->adr = s;
}

void deletion(Node *temp, int n)//core function for deleting a node
{
     Node *s;
     int c=0;
     while(temp!=NULL)
    {
        c++;
        if(c==n-1)
        {
            s = temp->adr->adr;
            break;
        }
        
        temp = temp->adr;
    }
    temp->adr = s;   
}

void search(Node *temp)//core function for searching an element in the list
{
    int c=0,k=0, n;
    printf("\n\n Enter the element you want to search for:-\t");
    scanf("%d", &n);
    while (temp!=NULL)
    {
        c++;
        if(temp->data==n)
        {
            k=1;
            break;
        }
        temp = temp->adr;
    }

    if(k==1)
    printf("\nElement found at node #%d", c);
    else
    printf("\nElement not found");
}