#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b;
    char sign='0';
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&a);
        while(sign!='=')
        {
            cin>>sign;
            if(sign=='=')
                break;
            scanf("%lld",&b);
            if(sign=='+')
                a=a+b;
            else if(sign=='-')
                a=a-b;
            else if(sign=='*')
                a=a*b;
            else if(sign=='/')
                a=a/b;
        }
    printf("%lld\n",a);
    sign='0';
    }
    return 0;
}
