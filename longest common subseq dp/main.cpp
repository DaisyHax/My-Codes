#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    char ip1[102],ip2[102];
    int arr[102][102];
    cin>>t;
    while(t--)
    {
        cin>>a;cin>>b;
        for(int i=0;i<a;i++)
            {cin>>ip1[i];}
        for(int i=0;i<b;i++)
            {cin>>ip2[i];}

        for(int i=0;i<=a;i++)
        {
            for(int j=0;j<=b;j++)
            {
                if(i==0||j==0)
                    arr[i][j]=0;
                else if(ip1[i-1]==ip2[j-1])
                    arr[i][j]=arr[i-1][j-1]+1;
                else
                    arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
                    //cout<<"here"<<endl;
                     //cout<<arr[i][j];
            }//cout<<endl;
        }
        cout<<arr[a][b]<<endl;
    }
    return 0;
}
