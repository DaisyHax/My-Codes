#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t,n;
    scanf("%lld",&t);
    for(ll k=0;k<t;k++)
    {
        scanf("%lld",&n);
        ll arr[n],b[n];
        for(ll i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            b[i]=0;
        }
        for(ll i=1;i<n;i++)
        {
            for(ll j=0;j<i;j++)
            {
                if(arr[i]>arr[j])
                    b[i]+=abs(arr[i]-arr[j]);
                else
                    b[i]-=abs(arr[i]-arr[j]);
            }
        }
        for(ll i=0;i<n;i++)
        {printf("%lld ",b[i]);}
        printf("\n");
    }
    return 0;
}
