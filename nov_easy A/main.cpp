#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll maxm=0;
    for(ll i=0;i<n;i++)
    { //cout<<"HERE 1"<<endl;
        for(ll j=i;j<n;j++)
        { //cout<<"HERE 2 "<< j<<endl;
            if(a[i]==a[j]&&(j-i+1)>=maxm)
                maxm=j-i+1;
        }
    }
    //cout<<"HERE 3"<<endl;
    cout<<maxm<<endl;
    return 0;
}
