#include <stdio.h>

int main(void) {
	int i=0,r,s,t;
	scanf("%d",&t);
	int n[t],k[t];
	while(i<t)
	{
	    s=0;
	    scanf("%d",&n[i]);
	    while(n[i]>0)
	    {
	        s+=(n[i]%10);
	        n[i]/=10;
	    }
	    k[i]=s;
	    i++;
	}
	i=0;
	while(i<t)
	{
        printf("%d\n",k[i]);
        i++;
    }
	return 0;
}

