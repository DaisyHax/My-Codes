#include<bits/stdc++.h>
using namespace std;
int phi(int n)
{
     int result = n;
     int i;
       for(i=2;i*i <= n;i++)
       {
         if (n % i == 0)
         result -= result / i;
         while (n % i == 0)
         n /= i;
       }
       if (n > 1)
       result -= result / n;
       return result;
}
int main()
{
    int t,num;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&num);
        printf("%d\n",phi(num));
    }
    return 0;
}

/*         THIS ANSWER IS CORRECT BUT TIME LIMIT EXCEEDED .
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;long int n;
    scanf("%d",&t);
    while(t--)
    {
        long int c=0;
        scanf("%ld",&n);
        for(long int i=0;i<n;i++)
        {
            if(__gcd(n,i)==1)
            {
                c++;
            }
        }
        printf("%ld",c);
    }
    return 0;
}
*/
