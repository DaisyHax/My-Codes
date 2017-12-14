#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[10002],b[10002][2],c[10002];
    scanf("%lld",&n);
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        b[i][0]=1000009;
        b[i][1]=0;
    }
    for(long long int i=0;i<n;i++)
    {
        if(a[i]!=1000009)
       {
        for(long long int j=0;j<n;j++)
        {
            if(b[i][0]==1000009)
            {//cout<<"inside first if"<<endl;
                b[i][0]=a[j];
                a[j]=1000009;
               // cout<<b[i][0]<<endl;
            }
            else
            {//cout<<"inside first else"<<endl;
                if(b[i][0]==a[j])
                {//cout<<"inside second if"<<endl;
                    b[i][1]++;
                   // cout<<"b[i][1] \t"<<b[i][1]<<endl;
                }
            }
        }
       }
    }
    long long int maxim=b[0][1],index=0,k=0;
    for(long long int i=0;i<n;i++)
    {
        if(b[i][1]>=maxim)
        {
            maxim=b[i][1];
           k++;
        }
    }
    for(long long int i=0;i<n;i++)
    {
        if(b[i][1]==maxim)
        {//cout<<"inside if loop to assign the value to c"<<endl;
            c[k]=b[i][0];
            k++;
        }
        //cout<<"b4"<<c[i]<<endl;
    }
    sort(c,c+k+1);

    for(long long int i=0;i<n;i++)
    {
       // cout<<c[i]<<endl;
        if(c[0]==b[i][0])
        {
            index=i;
            break;
        }
    }
    printf("%lld",b[index][0]);
    return 0;
}
