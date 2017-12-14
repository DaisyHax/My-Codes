#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n,k,a[1000001],b[1000001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        for(long long int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            b[i]=a[i];
        }
        if(k<n)
        {for(long long int i=0;i<n;i++)
         {
            b[i]=a[((n-k)+i)%n];
         }}
         else
         {k=k%n;
            for(long long int i=0;i<n;i++)
            {
            b[i]=a[((n-k)+i)%n];
            }
         }
        for(long long int i=0;i<n;i++)
        {
            printf("%lld ",b[i]);
        }
        printf("\n");
    }
    return 0;
}
