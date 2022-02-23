#include "stack.h"
#include <stdio.h>

void check(char s[])
{
    int i=0;
    char ch,tempch;
    while(s)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        push();
        else if(s[i]==')'||s[i]=='}'||s[i]==']')
        {
            ch=s[i];
            while(peek()!=ch)
            {
                if(isEmpty)
                {
                    printf("\nThe expression does not have a balanced paranthesis!");
                    break;
                }
                tempch=pop();
                top=top->next;
            }
        }
    }
}

int main()
{
    int ch=0, p;
    char cha;
    c=0;
    top=NULL;
    printf("\nEnter the maximum number of nodes:\n");
    scanf("%d",&MAX);
    printf("Enter 1 to push, 2 to pop, 3 to peek, 4 to display\n5 to check if empty, 6 to check if full, 0 to exit\n");
    scanf("%d",&ch);
    while(ch)
    {
        switch(ch)
        {
            case 1:
            push();
            display();
            break;

            case 2:
            cha=pop();
            display();
            break;

            case 3:
            peek();
            break;

            case 4:
            display();
            break;

            case 5:
            if(isEmpty())
            printf("\nStack is empty");
            break;

            case 6:
            if(isFull())
            printf("\nStack full");
            break;

            default:
            printf("\nEnter correct choice:");
            break;
        }
        printf("\n\nEnter 1 to push, 2 to pop, 3 to peek, 4 to display\n5 to check if empty, 6 to check if full, 0 to exit\n");
        scanf("%d",&ch);
    }
}
