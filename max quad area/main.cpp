#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        double s=((a+b+c+d)*1.0)/2;
        double ans=sqrt((s-a)*(s-b)*(s-c)*(s-d));
        cout<<setprecision(2)<<fixed<<ans<<"\n";
    }
    return 0;
}
