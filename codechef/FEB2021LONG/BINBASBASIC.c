#include <stdio.h>
#include <string.h>
int palin();
int getVal();
int palin(char str[],int l)
{
    for(int i=0;i<=l/2;i++)
    {
        if(str[i]!=str[l-i-1])
        return 0;
    }
    return 1;
}
int getVal(int l,int k)
{
    char str[l],str2[l];
    scanf(" %s",str);
    
    for(int i=0;i<l;i++)
    str2[i]=str[i];

    int lp=0,rp=l-1,c=0;
    while(rp>=lp)
    {
        if(k==c)
        break;
        else
        if(str[lp]==str2[lp]||str[rp]==str2[rp])
        {
            if(str[lp]!=str[rp])
            {
                str[rp]=str[lp];
                c++;
            }
        }
        else
        {
            if((palin(str,l)==1&&c+2<=k)||lp==rp)
            {
                if(str[lp]='1')
                {
                    str[lp]='0';
                    str[rp]='0';
                }
                else
                {
                    str[lp]='0';
                    str[rp]='0';
                }
                c=c+((lp!=rp)?2:1);
            }
        }
        lp++;
        rp--;
    }
    return(palin(str,l)==1?1:0);
}

int main()
{
    int t,i=0,k,l;
    int c[1000]={0};
    scanf("%d",&t);fflush(stdin);
    scanf("%d %d",&l,&k);                            
    c[i]=getVal(l,k);
    for(i=1;i<t;i++)
    {
        scanf("%d %d",&l,&k);
        c[i]=getVal(k,l);
    }

    for(i=0;i<t;i++)
    {
        if(c[i]==0)
        printf("NO\n");
        else
        printf("YES\n");
    }
}