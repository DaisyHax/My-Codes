#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,c=0;
    cin>>m>>n;
    int a[m],b[n];
    for(int i=0;i<m;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    sort(a,a+m);
    sort(b,b+n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<endl;
                c=1;
                break;
            }
        }
        if(c==1)
            break;
    }
    if(c!=1)
    {
        if(a[0]<b[0])
            cout<<((10*a[0])+b[0])<<endl;
        else
            cout<<((10*b[0])+a[0])<<endl;
    }
    return 0;
}
