#include <bits/stdc++.h>
using namespace std;

/*Euclid's GCD function*/
int GCD(int a,int b)
{
   if(a==0)
      return b;
   return (GCD(b%a,a));
}

int main() {
   int t,a,b,gcd;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d%d",&a,&b);
      gcd=GCD(a,b);

      /*Dividing A and B with their
      GCD, till we get their GCD
      equal to 1*/

      while(gcd!=1)
      {
         a/=gcd;
         b/=gcd;
         gcd=GCD(a,b);
      }
      /*Printing the answer*/
      printf("%d %d\n",b,a);
   }
   return 0;
}
