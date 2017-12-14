#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=1;
    long long int s,r;
    scanf("%d",&t);
    while(t--)
    {      scanf("%lld",&r);
           s = 4*r*r;
           cout<<"Case "<<i<<": "<<s<<".25"<<endl;
           i++;
    }
    return 0;
}
