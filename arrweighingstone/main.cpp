#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,a,i,a1 = 0,c[100],d[100],count,max1,max2;
scanf("%d",&t);
while(t--)
{
scanf("%d",&a);
max1=max2=count=0;
for(i=0;i<100;i++)
c[i]=d[i]=0;
for(i=0;i<a;i++)
{
scanf("%d",&a1);
c[a1]=c[a1]+1;
}
for(i=0;i<a;i++)
{
scanf("%d",&a1);
d[a1]=d[a1]+1;
}
i=99;
for(i=99;i>=0;i--)
{
if(c[i]>max1)
{
a=i;
max1=c[i];
}
else if(c[i]==max1)
if(i>a)
a=i;
if(d[i]>max2)
{
a1=i;
max2=d[i];
}
else if(d[i]==max2)
if(i>a1)
a1=i;
}
if(max1==max2)
{
if(a>a1)
printf("Rupam\n");
else if(a1>a)
printf("Ankit\n");
else
printf("Tie\n");
}
else if(max1>max2)
if(a>a1)
printf("Rupam\n");
else if(a1>a)
printf("Ankit\n");
else
printf("Tie\n");
else if(max2>max1)
if(a>a1)
printf("Rupam\n");
else if(a1>a)
printf("Ankit\n");
else
printf("Tie\n");
}

return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,rup[105],ank[105],r[105],a[105];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);

        for(int i=0;i<n;i++)
        {
            scanf("%d",&rup[i]);
            r[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ank[i]);
            a[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            r[rup[i]]++;
            a[ank[i]]++;
            //cout<<"rup freq"<<r[i]<<endl;
            //cout<<"ank freq"<<a[i]<<endl;
        }
        int maxr=0,maxa=0,winr,wina;
        for(int i=0;i<n;i++)
        {
            if(r[i]>maxr)
            {
                maxr=r[i];
            }
            if(r[i]==maxr)
            {   int index=0;
                for(int j=0;j<n;j++)
                { if(r[j]==maxr)
                    {index=j;}
                }
                if(i>index)
                {maxr=r[i];}
            }
            if(a[i]>=maxa)
            {
                maxa=a[i];
            }
            if(a[i]==maxa)
            {   int index2=0;
                for(int j=0;j<n;j++)
                { if(a[j]==maxa)
                    {index2=j;}
                }
                if(i>index2)
                {maxa=a[i];}
            }
        }

        for(int i=0;i<n;i++)
        {
            if(r[i]==maxr)
            {
                winr=i;
            }
            if(a[i]==maxa)
            {
                wina=i;
            }
        }
        cout<<"winr"<<winr<<endl;
        cout<<"wina"<<wina<<endl;
        if(winr>wina)
        {
            printf("Rupam\n");
        }
        else if(wina>winr)
        {
            printf("Ankit\n");
        }
        else
        {
            printf("Tie\n");
        }
    }
    return 0;
}
*/
