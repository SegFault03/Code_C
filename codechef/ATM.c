#include <stdio.h>

int main()
{
    int t;
    float b;
    scanf("%d%f",&t,&b);
    if(t%5==0&&(float)t+0.5<=b&&t!=0)
    printf("%.2f",b-((float)t+0.50));
    else
    printf("%.2f",b);
    return 0;
}