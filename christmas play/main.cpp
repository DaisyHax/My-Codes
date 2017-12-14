#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 long long int i,k,n,t,temp,temp2;
 cin>>t;
 while(t--)
 {
  cin>>n>>k;
  long long int a[n];
  for(i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n);
   temp=(a[k-1]-a[0]);
   if(k==1)
   cout<<temp<<endl;
   else
   {
  for(i=0;i<n-k;i++)
   {
     temp2=(a[i+k]-a[i+1]);
   if(temp>temp2)
    temp=temp2;
   }
  cout<<temp<<endl;
     }
}
return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
void merges(long int arr[],int l,int m,int r)
{
    int i,j,k;
    int n1=m-l+1,n2=r-m;
    long int L[n1], R[n2];
    for(i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=arr[m+1+j];
    }
    i=0;j=0;k=l;
    while(i<n1 && j<n2)
    {
       if(L[i]<=R[j])
       {
           arr[k]=L[i];
           i++;
       }
       else
       {
           arr[k]=R[j];
           j++;
       }
       k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;k++;
    }
}
void mergeSort(long int a[],int l,int r)
{
    if(l<r)
    {
    int m=l+(r-l)/2;
    mergeSort(a,l,m);
    mergeSort(a,m+1,r);
    merges(a,l,m,r);
    }
}
int main()
{
    int t,n,k;
    long int h[20001];
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            scanf("%ld",&h[i]);
        }
        if(k==1)
            printf("0\n");
        else if(k==n)
            printf("%d\n",n);
        else
        {
            long int minm=1000000000,diff=0;
            mergeSort(h,0,n-1);
            for(long int i=0;i<n-k+1;i++)
            {
                diff=h[i+k-1]-h[i];
                //cout<<diff<<endl;
                if(diff<=minm)
                   {
                      minm=diff;
                      //cout<<minm<<endl;
                   }
            }
            printf("%ld\n",minm);
        }
    }
    return 0;
}
*/
