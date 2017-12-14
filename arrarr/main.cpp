#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a[100001],b[100001],c[100001];
    cin>>n;
    for(long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(long int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(long int i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        cout<<c[i]<<endl;
    }
    return 0;
}
