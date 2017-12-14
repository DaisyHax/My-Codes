#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t,n,m;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        ll a[n][m],sum[n];
        for(ll i=0;i<n;i++)
        {
            sum[i]=0;
            for(ll j=0;j<m;j++)
            {
                scanf("%lld",&a[i][j]);
                sum[i]+=a[i][j];
            }
        }
        for(ll i=0;i<n;i++)
        {cout<<sum[i]<<endl;}
    }
    return 0;
}
