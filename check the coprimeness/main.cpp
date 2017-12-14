#include <bits/stdc++.h>
using namespace std;
int GCD(long long int a,long long int b)
{
   if(b==0)
      return a;
   else
      return GCD(b,a%b);
}

int main() {
   int t;
   scanf("%d",&t);
   long long int n,i;
   while(t--)
   {
      scanf("%lld",&n);
      for(i=n/2 ; i>=0 ; --i)
      {
         if(GCD(n,i)==1)
         {
            printf("%lld\n",i);
            break;
         }
      }
   }
   return 0;
}
