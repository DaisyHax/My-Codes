#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long int k,a[1000001],n,c=0,smallest=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(long int i=0;i<n;i++)
        { cin>>a[i]; }
        smallest=a[0];
        for(long int i=0;i<n;i++)
        {
            if(a[i]<=smallest)
               smallest=a[i];
        }
       /* while(smallest!=k)
        {
            smallest++;
            c++;
        }
    cout<<c<<endl;
    c=0;ANSWER WAS WRONG BY THIS Y?*/
        if(smallest<k)
        {
            cout<<(k-smallest)<<endl;
        }
        else
        {
            cout<<0<<endl;
        }

    }
    return 0;
}
