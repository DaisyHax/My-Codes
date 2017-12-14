#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,x,c=0,arr[10];
    cin>>n;
    if(n==1||n==3||n==5||n==7||n==9||n%20==0)
        cout<<"0"<<endl;
    else
    {
        int j=0;
        if(n<=10)
        {
            for(int i=0;i<n;i++)
            {
                ll d=i,sum=i;
                while(d!=0)
                {
                sum+=(d%10);
                d=d/10;
                }
                if(sum==n)
                {
                    c++;
                    arr[j]=i;
                    j++;
                }
            }
        }
        else
        {for(ll i=n-(9*(n/10));i<=n-1;i++)
        {
            ll d=i,sum=i;
            while(d!=0)
            {
                sum+=(d%10);
                d=d/10;
            }
            if(sum==n)
            {
                c++;
                arr[j]=i;
                j++;
            }
        }
        }
        cout<<c<<endl;
        for(int k=0;k<j;k++)
        {
            cout<<arr[k]<<endl;
        }
    }
    return 0;
}
