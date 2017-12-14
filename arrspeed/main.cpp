#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n,s[100001],c=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(long long int i=0;i<n;i++)
        {
            scanf("%lld",&s[i]);
        }
        for(long long int i=0;i<n-1;i++)
        {
            if(s[i]>s[i+1])
            {
                c++;
            }
            else
            {
                s[i+1]=s[i];
            }
        }
        printf("%lld\n",c);
        c=1;
    }
    return 0;
}
