#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,s;
    cin>>n>>s;
    ll l[s],r[s],a[n];
    for(ll i=0;i<n;i++)
        a[i]=0;
    for(ll i=0;i<s;i++)
    {
        cin>>l[i]>>r[i];
        a[l[i]]=2;
        a[r[i]]=2;
    }
    for(ll i=0;i<s;i++)
    {
        ll sum=0;
        for(ll j=l[i]-1;j>=0;j--)
        {
            if(a[j]==0)
            {//cout<<j<<endl;
                a[j]=1;
                sum+=j;
                break;
            }
        }
        for(ll j=l[i];j<=r[i];j++)
        {//cout<<j<<endl;
            a[j]=1;
            sum+=j;
        }
        for(ll j=r[i]+1;j<n;j++)
        {//cout<<"Here"<<endl;
            if(a[j]==2)
                break;
            if(a[j]==0)
            {//cout<<j<<endl;
                a[j]=1;
                sum+=j;
                break;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
