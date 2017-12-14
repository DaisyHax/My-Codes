#include<stdio.h>
int main()
{
    long long int a,b,n,p;
    while(1)
    {
        scanf("%lld %lld",&a,&b);
        if(a==0 && b==0)
        break;
        if(a>b)
        {
            if(a%b==0)
                printf("%lld\n",a/b);
            else
                printf("%lld\n",a*b);
        }
        else
        {
        	if(b%a==0)
                printf("%lld\n",b/a);
            else
                printf("%lld\n",a*b);
        }
    }
return 0;
}
