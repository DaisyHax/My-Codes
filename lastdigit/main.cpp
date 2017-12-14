#include <bits/stdc++.h>
using namespace std;
long long int ans(int x,long long int y)
{
    for(long long int j=1;j<=y;j++)
    {
       x*=x;
    } cout<<x<<endl;
    return (x%10);
}
int main()
{
    int t,a;
    long long int b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;

        if(b==0)
            cout<<1<<endl;
        else{
        cout<<ans(a,b)<<endl;
        }
    }
    return 0;
}
