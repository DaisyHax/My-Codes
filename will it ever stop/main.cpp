#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    if((n&(n-1))==0)    //checks for 2^n.... & is the Bitwise AND operator
        printf("TAK\n");
    else
        printf("NIE\n");
    return 0;
}
