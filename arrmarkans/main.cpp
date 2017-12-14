#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,x,a[100001],c=0,skip=0;
   scanf("%lld %lld",&n,&x);
   for(long long int i=0;i<n;i++)
   {
       scanf("%lld",&a[i]);
       if(a[i]<=x)
       {
           c++;
       }
       else if(a[i]>x)
       {
           if(skip==0)
           {
               skip=1;
           }
           else
            {
                break;
           }
       }
   }
   printf("%lld",c);
    return 0;
}
