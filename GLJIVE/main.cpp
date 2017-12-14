#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[11],sum[11],diff[11],max=0,ans;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum[i]=0;
        if(arr[i]>max)
            max=arr[i];
    }
    sum[0]=arr[0];
    diff[0]=abs(100-arr[0]);
    int minm=diff[0];
    for(int i=1;i<10;i++)
    {
        sum[i]=arr[i]+sum[i-1];
        diff[i]=abs(100-sum[i]);
        if(diff[i]<=minm)
            {   minm=diff[i];
                ans=sum[i];
            }
    }

    if(max==100)
        printf("%d",max);
    else
        printf("%d",ans);
    return 0;
}
