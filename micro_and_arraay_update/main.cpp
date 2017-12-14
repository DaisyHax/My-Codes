#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long int k,a[1001],n,c;
    cin>>t;
    while(t--)
    {   c=0;
        cin>>n>>k;
        for(long int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(long int g=0;g<n;g++)
        {for(long int i=0;i<n;i++)
        {
            if(a[i]<k)
            {
                for(long int j=0;j<n;j++)
                {   c++;
                    a[j]++;
                }
                break;
            }
        }
        }
        for(long int i=0;i<n;i++)
        {
            cout<<c<<endl;
        }
    }
    return 0;
}
