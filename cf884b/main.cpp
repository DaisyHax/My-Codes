#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,x,sum=0;
    cin>>n>>x;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    sum=n-1;
    for(ll i=0;i<n;i++)
    {
        sum+=a[i];
    }
    if(sum!=x)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
