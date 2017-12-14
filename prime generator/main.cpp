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
        bool prime[m+1];
        memset(prime,true,sizeof(prime));
        for(ll p=2;p*p<=m;p++)
        {
            if(prime[p]==true)
            {
                for(ll i=p*2;i<=m;i+=p)
                {
                    prime[i]=false;
                }
            }
        }
        if(n==1)
            n=2;
        for(ll i=n;i<=m;i++)
        {
            if(prime[i])
            {
                printf("%lld\n",i);
            }
        }
    }
    return 0;
}
