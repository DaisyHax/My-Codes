#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        int c=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            if(gcd(n,i)==1)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
