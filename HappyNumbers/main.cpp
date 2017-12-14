#include <bits/stdc++.h>
using namespace std;
int main()
{
    int val,num,c=0,sum=0;
    scanf("%d",&val);
    num=val;
    while(sum!=1)
    {
        c++;
        while(num!=0)
        {
            int x=num%10;
            sum=sum+(x*x);
            num=num/10;
        }
        if(c>12||sum==1)
            {break;}
        num=sum;
        sum=0;
    }
    if(sum==1)
    {
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
