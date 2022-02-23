#include <stdio.h>
//program to compute the nth prime
int main()
{
    int i, n, c, m, k;// c is loop counter, i control variable, m flag variable, k is for checking prime
    c = m = 0;//initially flag and control variables are set to 0
    i = 1;
    k = 2;//1 is not a prime number
    printf("**A program to display the nth prime number**\n\tEnter n\n");
    scanf("%d", &n);
    while(c<=n)//checking if the given prime is the nth prime
    {
        while(i<=k)//loop for checking if a given number is prime 
        {
            if(k%i==0)
            m++;
            i++;
        }   
        if(m==2)//prime only has two factors: 1 and the number itself
       {
            c++;
            if(c==n)//if the prime number is the nth prime, this condition is executed
            printf("\nThe %dth prime number is:\t%d",n, k); 
       }  
        k++;
        i = 1;
        m=0;//reinitializing flag and control variables, incrementing no. to be checked by 1
    }
}