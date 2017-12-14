#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,god[100001],mech[100001],maxg,maxm;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(int i=0;i<n;i++)
        {scanf("%d",&god[i]);}
        for(int i=0;i<m;i++)
        {scanf("%d",&mech[i]);}

        maxg=0;maxm=0;
        for(int i=0;i<n;i++)
        {
            if(god[i]>=maxg)
            {
                maxg=god[i];
            }
        }
        for(int i=0;i<m;i++)
        {
            if(mech[i]>=maxm)
            {
                maxm=mech[i];
            }
        }

        if(maxg>=maxm)
        {printf("Godzilla\n");}
        else
        {printf("MechaGodzilla\n");}
    }
    return 0;
}
