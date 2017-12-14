#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,c,d,p,q,r,s;
    cin>>t;
    while(t--)
{
    cin>>a>>b>>c>>d>>p>>q;
    if(a==p)
    {
        if(b==q)
        {
            r=c;
            s=d;
        }
        else if(c==q)
        {
            r=b;
            s=d;
        }
        else if(d==q)
        {
            r=b;
            s=c;
        }
    }
    else if(b==p)
    {
        if(c==q)
        {
            r=a;
            s=d;
        }
        else if(a==q)
        {
            r=c;
            s=d;
        }
        else if(d==q)
        {
            r=a;
            s=c;
        }
    }
    else if(c==p)
    {
        if(b==q)
        {
            r=a;
            s=d;
        }
        else if(a==q)
        {
            r=b;
            s=d;
        }
        else if(d==q)
        {
            r=a;
            s=b;
        }
    }
    else if(d==p)
    {
        if(a==q)
        {
            r=b;
            s=c;
        }
        else if(b==q)
        {
            r=a;
            s=c;
        }
        else if(c==q)
        {
            r=a;
            s=b;
        }
    }
    cout<<r*s<<endl;
}
    return 0;
}
