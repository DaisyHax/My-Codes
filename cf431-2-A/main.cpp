#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[102];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j=n-1;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            for(int j=i+1;j<n;j++)
            {
                if((a[j]%2!=0)&&((j-i+1)%2!=0))
                {flag++;
                    //cout<<"flag"<<flag<<"at " <<j<<endl;
                }
            }
        }
    }
    if(flag%2!=0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
