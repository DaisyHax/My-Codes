#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t,m;
    ll n;
    cin>>t;
    while(t--)
    {
        scanf("%lld %d",&n,&m);
        if(m==0)
            cout<<"Airborne wins."<<endl;
        else
            cout<<"Pagfloyd wins."<<endl;
    }
    return 0;
}
