/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct process{
    char id;
    int priority,at,bt,ct,tat,wt;
}process;

int getMax(int fp,int rp, process *list)
{
    int max=fp;
    for(int i=fp;i<rp;i++)
    {
        if(list[max].priority<list[i].priority)
        max=i;
    }
return max;
}

void sort(process *list, int n)
{
    int i,j, min_at=list[0].at;
    process temp;
    for(i=0;i<n-1;i++)
    {
        min_at=i;
        for(j=i+1;j<n;j++)
        {
            if(list[min_at].at>list[j].at)
            min_at=j;
        }
        temp=list[i];
        list[i]=list[min_at];
        list[min_at]=temp;
    }
}

void scheduler(process *list, int n)
{
    int i,j,cp=0,temp=0,total_tat=0,total_wt=0;
    int max_priority_process;
    for(i=0;i<n;i++)
    {
        while(cp<list[i].at)
        cp++;
        temp=cp;
        j=i;
        while(list[j].at<=cp)
        {temp++;j++;}
        max_priority_process=getMax(cp,temp,list);
        list[max_priority_process].ct=cp+list[max_priority_process].bt;
        cp+=list[max_priority_process].ct;
        list[max_priority_process].tat=list[max_priority_process].ct-list[max_priority_process].at;
        list[max_priority_process].wt=list[max_priority_process].tat-list[max_priority_process].bt;
    }
    for(i=0;i<n;i++)
    printf("Process id:\tPriority\tAT\tBT\tCT\tTAT\tWT\n");
    printf("%c\t%d\t%d\t%d\t%d\t%d\t%d",list[i].id,list[i].priority,list[i].at,list[i].bt,list[i].ct,list[i].tat,list[i].wt);
}

int main()
{
    int number_of_process,i;
    printf("Enter the number of processes:\n");
    scanf("%d",&number_of_process);
    process list[number_of_process];
    for(i=0;i<number_of_process;i++)
    {
        printf("Enter the process id of process %d followed by priority,AT,BT:",i+1);
        scanf("%c %d %d %d",&list[i].id,&list[i].priority, &list[i].at, &list[i].bt);
    }
    sort(list,number_of_process);
    scheduler(list,number_of_process);
}


