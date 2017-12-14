#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q,a[1000001],l,r,j=0,x,p,numb=0;
    //cin>>n>>q;
    scanf("%lld %lld",&n,&q);
    for(long long int i=1;i<n+1;i++)
    {//cin>>a[i];
        scanf("%lld",&a[i]);
    }
        while(q--)
        {
        //cin>>p;
        scanf("%lld",&p);
        if(p==0)
        {
            //cin>>l>>r;
            scanf("%lld %lld",&l,&r);
            /*j=0;
            for(long long int i=r;i>=l;i--)
            {
                numb=numb+a[i]*pow(2,j);
                j++;
            }*/
            if(a[r]==0)
                {//cout<<"EVEN\n";
                    printf("EVEN\n");
                }
            else
                {//cout<<"ODD\n";
                printf("ODD\n");
                }
            //j=0;
        }
        else if(p==1)
        {
            //cin>>x;
            scanf("%lld",&x);
            if(a[x]==1)
                a[x]=0;
            else
                a[x]=1;
        }
    }
    return 0;
}
