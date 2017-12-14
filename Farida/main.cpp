#include <bits/stdc++.h>
using namespace std;

long long int p[10001];
//long long int ans[10001];

long long int profit(int eve,int n,long long int ans[10001])
{
    if(eve>n)
        return 0;
    if(ans[eve]!=-1)
        return ans[eve];
    return ans[eve]=max(profit(eve+2,n,ans)+p[eve],profit(eve+3,n,ans)+p[eve+1]);
}
int main()
{
    int t,N;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&N);
        long long int an[10001];
        for(int i=0;i<N;i++)
        {
            scanf("%lld",&p[i]);
            an[i]=-1;
        }
        cout<<profit(0,N,an)<<endl;
    }

    return 0;
}
/*
#include<iostream>
using namespace std;
int main()
{
    int t,k=1;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        long long int a[n],b[n],max=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]= 0;
        }
        b[0]= a[0];
        b[1]= a[1];
        for(i=2;i<n;i++)
        {
            for(j=0;j<i-1;j++)
            {
                if(b[i]< b[j] + a[i])
                    b[i]= b[j] + a[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(max< b[i])
                max = b[i];
        }
        cout<<"Case "<<k++<<": "<<max<<endl;
    }
    return 0;
}
*/
