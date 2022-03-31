#include <stdio.h>
#include <stdlib.h>

typedef struct process
{
    int at,bt,tat,ct;
    char a;
    struct process *adr;
}process;

process *fp, *tp;

process* dequeue()
{
    process *temp=NULL;
    while(temp->adr != tp)
    temp=temp->adr;
    temp->adr=NULL;
    return tp;
}

process* enqueue(int at,int bt, char a)
{
    process *temp=(process*)malloc(sizeof(process));
    temp->at=at;
    temp->bt=bt;
    temp->a=a;
    if(fp==NULL)
    fp=temp;
    else
    {
        temp->adr=fp;
        fp=temp;
    }
}
void search(int cp)
{
    
}
void cal()
{
    int tq=2;
    int cp=0;
    process *temp=NULL;
    while(fp!=NULL)
    {
       temp=search(cp);
       if(temp->bt>cp)
       {
           temp->bt-=2;
           cp+=2;
           if(temp->bt>0)
            enqueue(temp->at,temp->bt,temp->a);
           else
           {
               printf("Process id:%d\tAT:%D\tBT:%d\tCT:%d\tTAT:%d",temp->a,temp->at,temp->bt,cp,ct-temp->at);
           }
       }
       else
       {
           cp=temp->bt+cp;
           printf("Process id:%d\tAT:%D\tBT:%d\tCT:%d\tTAT:%d",temp->a,temp->at,temp->bt,cp,ct-temp->at);
       }
    }
}

int main()
{
    int np,at,bt;
    char a;
    printf("Enter the number of programs\n");
    scanf("%d",&np);
    while(np--)
    {
        printf("Enter process id, at, bt");
        scanf("%d%d%d",&a,&at,&bt);
        enqueue(at,bt,a);
    }
    cal();
}

