#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,arr[101][101];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int ma=102;
    for(int i=1;i<n;i++)
    {
        ma=102;
        for(int j=0;j<m;j++)
        {
            if(j>0 && j<m-1)
                arr[i][j]=min(arr[i][j]+arr[i-1][j],min(arr[i-1][j-1]+arr[i][j] , arr[i-1][j+1]+arr[i][j]));
            else if(j==0)
                arr[i][j]=min(arr[i-1][j]+arr[i][j],arr[i-1][j+1]+arr[i][j]);
            else if(j==m-1)
                arr[i][j]=min(arr[i-1][j]+arr[i][j],arr[i-1][j-1]+arr[i][j]);

            ma=min(arr[i][j],ma);
        }
    }cout<<ma<<endl;
    return 0;
}
