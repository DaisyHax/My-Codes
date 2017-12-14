#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a[1000001],b[1000001],q,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        b[i];
    }
    for(int i=0;i<q;i++)
    {   c=0;
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {c++;}
        }
        if(c==0)
        {
            cout<<"NOT PRESENT"<<endl;
        }
        else
        {
           cout<<c<<endl;
        }
    }
    return 0;
}
