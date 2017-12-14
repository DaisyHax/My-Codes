#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,d,counter[100],m=0;
    long int b[100],c[100];
    do
    {
          m=0;
        scanf("%d %d",&a,&d);
        if(a==0&&d==0)
            break;
        for(int i=0;i<a;i++)
        {
            scanf("%ld",&b[i]);
            counter[i]=0;
        }
        for(int i=0;i<d;i++)
        {
            scanf("%ld",&c[i]);
        }

        for(int i=0;i<a;i++)
        {
            for(int j=0;j<d;j++)\
            {
                if(b[i]>=c[j])
                {
                    counter[i]++;
                }
            }
        }
        for(int i=0;i<a;i++)
        {
            if(counter[i]>=2)
            {
                m++;
            }
        }

    if(m==a)
    {
        printf("N\n");
    }
    else
    {
        printf("Y\n");
    }

    }while(a!=0&&d!=0);

    return 0;
}
