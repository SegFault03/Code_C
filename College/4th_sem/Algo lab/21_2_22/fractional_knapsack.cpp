#include <iostream>
using namespace std;

//SORT
typedef struct items
{
    int profit;
    int weight;
    double ratio;
    char marker;
    items()
    {
        this->profit = 0;
        this->weight=0;
        this->ratio=0;
        this->marker='\0';
    }
}items;




void merge(items a[], int p, int q, int r)
{
    int n1,n2,i,j,k;
    n1 = q-p+1;
    n2 = r-q;
    items L[n1+1],R[n2+1];
    for(i=0;i<n1;i++)
    {
        L[i]= a[p+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j] = a[q+j+1];
    }
    L[i].ratio=-1;
    R[j].ratio=-1;
    i=0;j=0;

    for(k=p;k<=r;k++)
    {
        if(L[i].ratio>=R[j].ratio)
        {
            if(L[i].ratio==R[j].ratio)
            {
                if(L[i].weight<R[i].weight)
                {
                    a[k]=L[i];
                    i++;
                }
            }
            else
            {
            a[k]=L[i];
            i++;
            }
        }
        else
        {
            a[k] = R[j];
            j++;
        }
    }

}

void merge_sort(items *a, int l, int u)
{
    if(u>l)
    {
        int mid=(l+u)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,u);
        merge(a,l,mid,u);
    }
}

int main()
{
    int n,bag,i;
    int p,w;
    double temp_wt=0,tot_wt=0,temp_ratio=0;
    char s;
    // cin>>n;
    cout<<"Max bag capacity:"<<endl;
    cin>>bag;
    items array[7];
    cout<<"Enter items in form: profit weight marker"<<endl;
    for(int i=0;i<7;i++)
    {
        cin>>p>>w>>s;
        array[i].profit=p;
        array[i].weight=w;
        array[i].marker=s;
        array[i].ratio=p/w;
    }
    merge_sort(array,0,7);

    i=0;
    while(bag>0||i<7)
    {
        
        temp_wt=array[i].weight;
        if(temp_wt>bag)
        {
            temp_ratio=bag/temp_wt;
            tot_wt=temp_ratio;
        }
        else
        {
            tot_wt=1;
            bag=bag-(tot_wt*temp_wt);
        }
        cout<<array[i].marker<<" "<<tot_wt<<endl;
        tot_wt=0;
        i++;
    }
}
