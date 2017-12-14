#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,a[1001],b[1001];
    scanf("%d",&t);
    while(t--)
    {
        int diff=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&m);
        for(int i=0;i<m;i++)
        {
            scanf("%d",&b[i]);
        }
        sort(a,a+n);
        sort(b,b+m);
        int minm=abs(a[0]-b[0]);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                diff=abs(a[i]-b[j]);
                if(diff<=minm)
                    {
                        minm=diff;
                    }
            }
        }
        printf("%d\n",minm);
    }
    return 0;
}
