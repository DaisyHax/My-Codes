#include <bits/stdc++.h>
using namespace std;

int main()
{
    int alice,t,n,m,count=0;
    char a[31][31];
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n>>m;
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<m; k++)
            {
            cin>>a[j][k];
            }
        }
        cin>>alice;

        for(int i=0;i<n;i++)
        {
            for(int j=2;j<m;j++)
            {
                if((a[i][j-2]=='A'&& a[i][j-1]=='C'&& a[i][j]=='M')||(a[i][j-2]=='M'&& a[i][j-1]=='C'&& a[i][j]=='A'))
                {
                    count++;
                }
            }
        }

        for(int j=0;j<m;j++)
        {
            for(int i=2;i<n;i++)
            {
                if((a[i-2][j]=='A'&& a[i-1][j]=='C'&& a[i][j]=='M')||(a[i-2][j]=='M'&& a[i-1][j]=='C'&& a[i][j]=='A'))
                {
                    count++;
                }
            }
        }

        if(count==alice)
        {
            cout<<"Bravo Alice "<<count<<endl;
        }
        else
        {
            cout<<"Go to one dimension "<<count<<endl;
        }
    }
    return 0;
}
