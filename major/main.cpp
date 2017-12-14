#include<bits/stdc++.h>
int main()
{
    long int t,n,p,s,i,j,max;
    scanf("%ld",&t);
    while(t--)
    {
        max=0;
        scanf("%ld",&n);
        int ar[n],br[10000]={0};
        for(i=0;i<n;i++){
            scanf("%d",&ar[i]);
         br[ar[i]+1000]+=1;
            if(max<br[ar[i]+1000]){
                max=br[ar[i]+1000];
                p=ar[i];
            }
        }
        if(max>n/2)
         printf("YES %ld\n",p);
        else
            printf("NO\n");
    }
    return 0;
}
