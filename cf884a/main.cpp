#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,t,c=0,sub=0;
    cin>>n>>t;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    if(t==0)
        cout<<"0"<<endl;
    else
    {for(ll i=0;i<n;i++)
    {
        sub=86400-a[i];
        c++;
        t-=sub;
        if(t<=0)
            break;
    }
    cout<<c<<endl;
    }
    return 0;
}
