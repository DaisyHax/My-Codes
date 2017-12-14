#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,m,a,d,timer=0,c=0;
    cin>>n>>m>>a>>d;
    ll emp[n];
    for(int i=1;i<=n;i++)
    {
        emp[i-1]=i*a;
    }
    for(int i=n;i<n+m;i++)
    {
        cin>>emp[i];//client time
    }
    sort(emp,emp+n+m);
    bool door=0;//closed=0 open=1
    timer+=emp[0];
    for(int i=0;i<n+m;i++)
    {
        if(door==0)
        {
            door=1;
            c++;
            timer+=3;
            if()
        }
        else if(door==1 && emp[i]<=timer)
        {

        }
    }
    return 0;
}
