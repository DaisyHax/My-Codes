#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;string bank[100002];
    //string acc;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<=n;++i)
        {
            getline(cin,bank[i]);
        }
        sort(bank+1,bank+n+1);
        int c=1;
		for(int i=1;i<=n;i++)
			{
			    if(bank[i]==bank[i+1])
                    ++c;
                else
                {
                    cout<<bank[i]<<" "<<c<<endl;
                    c=1;
                }
			}
    }
    return 0;
}
