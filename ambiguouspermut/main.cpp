#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100001],c=0;
    do
    {
        scanf("%d",&n);
        if(n==0)
        {break;}
        c=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
            if(a[j]==i&&a[i]==j)
            {
                c++;
                break;
            }
            else
            {continue;}
            }
        }
        if(c==n)
        {
            printf("ambiguous\n");
        }
        else
        {
            printf("not ambiguous\n");
        }

    }while(n!=0);
    return 0;
}
