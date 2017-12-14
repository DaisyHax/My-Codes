#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,h[1000001],c=1;
    scanf("%lld",&n);
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&h[i]);
    }
    for(long long int i=1;i<n;i++)
    {
        if(h[i]<h[i-1])
        {
            c++;
        }
        else
        {
            continue;
        }
    }
    printf("%lld",c);
    return 0;
}
