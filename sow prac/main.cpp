#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ll arr[n],b[n],c=0,k;
        for(ll i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            b[i]=0;
        }
        for(ll i=1;i<n;i++)
        {
            k=arr[i]-arr[i-1];
            b[i]=k+c*k+b[i-1];
            c++;
        }
        for(ll i=0;i<n;i++)
        {
        printf("%lld ",b[i]);
        }
        printf("\n");
    }

    return 0;
}
