#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int q,cost,x;
    stack<long long int> mang;
    scanf("%lld",&q);
    for(long long int i=0;i<q;i++)
    {
        scanf("%lld",&x);
        if(x==1)
        {
            if(mang.empty())
            {
                printf("No Food\n");
            }
            else
            {
            printf("%lld\n",mang.top());
            mang.pop();
            }
        }
        else if(x==2)
        {
            scanf("%lld",&cost);
            mang.push(cost);
        }
    }
    return 0;
}
