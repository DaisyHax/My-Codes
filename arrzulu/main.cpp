#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n,a[200001],maxim=0;
    stack<long int> s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld",&n);
        for(long int i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }

        s.push(abs(a[0]-a[1]));
        for(long int i=1;i<n;i++)
        {
            for(long int j=i+1;j<n;j++)
            {
                if(abs(a[i]-a[j])>s.top())
                {
                    s.pop();
                    s.push(abs(a[i]-a[j]));
                }
            }
        }
        printf("%ld\n",s.top());
        s.pop();
    }
    return 0;
}
