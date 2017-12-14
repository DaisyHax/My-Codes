#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,ans=1;
    while(cin>>n)
    {
        ans=(n*(n+1)*(2*n+1))/6;
        cout<<ans<<endl;
    }
    return 0;
}
