#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,a[100001],small=0,c=0;
    scanf("%lld",&t);
    while(t--)
    {
        c=0;
        small=0;
        scanf("%lld",&n);
        for(long long int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        small=a[0];
        for(long long int i=1;i<n;i++)
        {
            if(a[i]<=small)
            {
                small=a[i];
                //printf("%lld\n",small);
            }
        }
        for(long long int i=0;i<n;i++)
        {
            if(a[i]==small)
            {
                c++;
                //printf("%lld\n",c);
            }
        }
        if(c%2!=0)
        {
            printf("Lucky\n");
        }
        else
        {
            printf("Unlucky\n");
        }
    }
    return 0;
}
