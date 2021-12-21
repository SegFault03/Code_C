//returning the array to a function

#include <stdio.h>

char* input()
{
    char st[10];int i=0;
    printf("Enter input: ");
    for(i=0;i<4;i++)
    scanf(" %c",&st[i]);
    //  st[i]='\0';     NOTE: ALL the indices of a character array are filled with '\000' and therefore all character arrays can be effectively
    //                     treated as string arrays without explicitly initializing the last index with a '\0' 
    char *pt=st;    //NOTE: The array CANNOT be treated as a pointer when returning its adress. It must be first stored into another pointer
    return pt;      //The pointer value carrying the adress is returned
}

int main()
{
    char *pt;
    int i=0;
    pt=input();
    while(pt[i]!='\0')  //another pointer receives the location of the array, and from that point onwards starts behaving as the array
    {
        printf("%c\t",pt[i]);
        i++;
    }
}