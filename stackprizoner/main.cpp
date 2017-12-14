#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x[100001],y[100001],a[100001],c[100001],cl,cr;
    scanf("%lld",&n);
    for(long long int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
    }

    for(long long int i=1;i<=n;i++)
    {
        if(i==n)
        {
        y[i]=-1;
        }
       else
       {for(long long int j=i+1;j<=n;j++)
       {
           if(a[j]>a[i])
            {
                y[i]=j;
                break;
            }
       }}
       for(long long int i=1;i<=n;i++)
        {
       cout<<"y[i]"<<y[i]<<endl;
        }

       if(i==1)
       {
           x[i]=-1;
       }
       else
       {for(long long int j=i-1;j<=1;j--)
       {
           if(a[j]>a[i])
            {
                x[i]=j;
                break;
            }
       }}
       for(long long int i=1;i<=n;i++)
        {
       cout<<"x[i]"<<x[i]<<endl;
        }
    }

    for(long long int i=1;i<=n;i++)
    {
        c[i]=x[i]+y[i];
    }
    for(long long int i=1;i<=n;i++)
    {
        printf("%lld ",(c[i]));
    }
    return 0;
}
