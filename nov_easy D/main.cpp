#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n],l,r,b[n];
    for(ll i=0;i<n;i++)
        a[i]=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i]>>l>>r;
        int count=r-l+1; //assuming all numbers to be distinct
        for(; l<=r; l++)
        {
            for(ll j=l+1; j<=r; j++)
            {
                if(a[l]==a[j])
                {
                count--;
                break;
                }
            }
        }
        b[i]=count;
    }
    for(ll i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }

    return 0;
}
