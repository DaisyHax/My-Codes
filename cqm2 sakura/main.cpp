#include <bits/stdc++.h>
#define lo long long int
using namespace std;

int main()
{
    lo t,r;
    string str;
    cin>>t;
    while(t--)
    {
        lo n[5],p[5],c[5];
        cin>>str;
        for(int i=0;i<4;i++)
            cin>>n[i];
        for(int i=0;i<4;i++)
            cin>>p[i];
        cin>>r;
        lo cost=0,cou=0;
        for(int i=0;i<4;i++)
        {
            c[i]=0;
        }

        for(lo i=0;i<str.length();i++)
        {
            if(str[i]=='F')
                c[0]++;
            else if(str[i]=='E')
                c[1]++;
            else if(str[i]=='S')
                c[2]++;
            else if(str[i]=='B')
                c[3]++;
        }
        while(cost<=r)
        {
            //cout<<"inside while"<<endl;
            for(int i=0;i<4;i++)
            {
            if(n[i]!=0)
            {
                n[i]--;
            }
            else
                cost+=p[i]*c[i];
            }
            if(cost<=r)
                cou++;
            //cout<<"inside while end"<<endl;
        }
       // cou=r/cost;
        cout<<cou<<endl;
    }

    return 0;
}
