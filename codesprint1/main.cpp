#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int q,n,k,x,d;
    scanf("%d",&q);
    while(q--)
    {
        float per=0,sum=0;
        cin>>n>>k>>x>>d;
        int p[n];
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
            per=float(x*p[i])/float(100);
           // cout<<per<<endl;
            if(k>=per)
                sum+=k;
            else
                sum+=per;
            //cout<<sum<<endl;
        }
          //cout<<sum<<endl;
        if(sum>d)
            cout<<"upfront"<<endl;
        else
            cout<<"fee"<<endl;
    }
    return 0;
}
