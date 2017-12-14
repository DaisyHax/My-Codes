#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll c=0,d=0,n;
ll visit[1001][1001];
ll game(ll iox,ll jox,char a[][1001])
{
    char xup,xdown,xlef,xryt;
    if((iox-1)>=0)
    {
        cout<<a[iox-1][jox]<<endl;
        xup=(char)a[iox-1][jox];
        cout<<xup<<endl;
        if(xup=='b'&&visit[iox-1][jox]!=1)
        {cout<<"In inner if"<<endl;
            game(iox-1,jox,a);
            c++;
            visit[iox-1][jox]=1;
        }cout<<"OUT"<<endl;
    }
    if(iox+1<n)
    {
        xdown=a[iox+1][jox];
        if(xdown=='b')
        {
            game(iox+1,jox,a);
            c++;
        }
    }
    if(jox-1>=0)
    {
        xlef=a[iox][jox-1];
        if(xlef=='b')
        {
            game(iox,jox-1,a);
            c++;
        }
    }
    if(jox+1<n)
    {
        xryt=a[iox][jox+1];
        if(xryt=='b')
        {
            game(iox,jox+1,a);
            c++;
        }
    }
    cout<<"reeached"<<endl;
    return c;
}
ll game1(ll iox,ll jox,char a[][1001])
{
    ll xup,xdown,xlef,xryt;
    if(iox-1>=0)
    {
        xup=a[iox-1][jox];
        if(xup=='b')
        {
            game1(iox-1,jox,a);
            d++;
        }
    }
    if(iox+1<n)
    {
        xdown=a[iox+1][jox];
        if(xdown=='b')
        {
            game1(iox+1,jox,a);
            d++;
        }
    }
    if(jox-1>=0)
    {
        xlef=a[iox][jox-1];
        if(xlef=='b')
        {
            game1(iox,jox-1,a);
            d++;
        }
    }
    if(jox+1<n)
    {
        xryt=a[iox][jox+1];
        if(xryt=='b')
        {
            game1(iox,jox+1,a);
            d++;
        }
    }
    return d;
}
int main()
{
    ll t;char arr[1001][1001];
    cin>>t;
    while(t--)
    {
        cin>>n;
        string str;
        ll ix,jx,iy,jy;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                cin>>str;
                arr[i][j]=str[j];

                if(arr[i][j]=='X')
                {
                    ix=i;jx=j;
                }
                if(arr[i][j]=='Y')
                {
                    iy=i;jy=j;
                }
            }
        ll C=game(ix,jx,arr);
        ll D=game1(iy,jy,arr);
         cout<<"I M HERE"<<endl;
        if(C>D)
        {
            cout<<"Pack 1"<<endl;
             cout<<"I M HERE"<<endl;
        }
        else if(D>C)
        {
            cout<<"Pack 2"<<endl;
             cout<<"I M HERE"<<endl;
        }
        else
        {
            cout<<"Gru gets to keep all bananas!"<<endl;
             cout<<"I M HERE"<<endl;
        }
    }
    }
    return 0;
}
