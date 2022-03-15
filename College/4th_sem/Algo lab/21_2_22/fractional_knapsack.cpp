#include <iostream>
using namespace std;

//SORT



void merge(float a[], int p, int q, int r,int item[])
{
    int n1,n2,i,j,k;
    n1 = q-p+1;
    n2 = r-q;
    float L[n1+1],R[n2+1];
    int LP[n1],RP[n2];
    for(i=0;i<n1;i++)
    {
        L[i]= a[p+i];
        LP[i]=item[p+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j] = a[q+j+1];
        RP[j] = item[q+j+1];
    }
    L[i]=99999;
    R[j]=99999;
    i=0;j=0;

    for(k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            item[k]=LP[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            item[k]=RP[i];
            j++;
        }
    }

}

void merge_sort(float *a, int l, int u,int *i)
{
    if(u>l)
    {
        int mid=(l+u)/2;
        merge_sort(a,l,mid,i);
        merge_sort(a,mid+1,u,i);
        merge(a,l,mid,u,i);
    }
}

int main()
{
    int n,bag,temp_wt=0,i;
    cin>>n;
    cin>>bag;
    int C[n],W[n],item_no[n];
    float ratio[n];
    for(i=0;i<n;i++)
    {
        cin>>C[i]>>W[i];
        ratio[i]=C[i]/W[i];
        item_no[i]=i+1;
    }    
    merge_sort(ratio,0,n,item_no);
    for(i=0;i<n;i++)
    cout<<item_no[i]<<ratio[i];
    // i=0;
    // while(temp_wt<=bag)
    // {
    //     temp_wt+=ratio[i];
    //     cout<<
    //     i++;
    // }
}
