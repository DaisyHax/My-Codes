#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[10001],c=0;
    scanf("%d",&n);
    for(long long int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(long long int i=1;i<n;i++)
    {

        if(a[i]==a[i-1]&&a[i]<=109)
        {
            c++;
        }
    }
    if(c==n-1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
