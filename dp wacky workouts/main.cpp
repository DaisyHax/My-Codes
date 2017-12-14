#include <bits/stdc++.h>
using namespace std;

int work(long long int x)
{
    long long int dp[x];
    dp[0]=1;
    dp[1]=2;
    if(x==0)
        return dp[0];
    else if(x==1)
        return dp[1];
    for(long long int i=2;i<=x;i++)
    {
        dp[i]=(dp[i-2]+dp[i-1])%1000000007;
    }
    return dp[x];
}
int main()
{
    int t;
    long long int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
         cout<<(work(n)%1000000007)<<endl;
    }
    return 0;
}
