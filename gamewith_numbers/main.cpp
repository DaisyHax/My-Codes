#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    if(n%10==0)
    {printf("2\n");}
    else{
        int k=n;
        for(int i=1;i<=9;i++)
        {
            k=k-i;
            if(k%10==0)
                printf("1\n%d",i);
            else
                k+=i;
        }
    }
    return 0;
}
