#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int t,l=1;
    cin>>t;
    while(t--)
    {
        int need,frnds,i;
        cin>>need;cin>>frnds;
        int each[frnds];
        for(i=0;i<frnds;i++)
            {cin>>each[i];}
        sort(each, each+frnds);
        int sum=0;
        for(i=frnds-1;i>=0;i--)
        {
            sum=sum+each[i];
            cout<<sum<<endl;
            if(sum>=need)
                break;
        }
        printf("Scenario #%d:\n",l++);
        if(sum>=need)
            printf("%d\n",i);
        else
            printf("impossible\n");

    }
    return 0;
}
