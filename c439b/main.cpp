#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a,b;
    cin>>a>>b;
    if(a-b>=5)
        cout<<"0"<<endl;
    else
    {
        int d=1;
        for(ll i=a+1;i<=b;i++)
        {
            if(d%10==0)
            {
                d=0;
                break;
            }
            else
                d=((i%10)*d)%10;
        }
        cout <<d<< endl;
    }
    return 0;
}
