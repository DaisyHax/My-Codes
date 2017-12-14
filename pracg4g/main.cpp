#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,a[101];
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int m=n-1;
        int s=0;
	    while(m--)
	    {
	        int q=a[n-1];
	        int temp=a[n-1];
            for(int i=n-1;i<0;i--)
            {
	        a[i]=a[i-1];
            }
            s++;
            a[0]=q;
        for(int i=n-s;i<n;i++)
        {
            a[i]=a[i+1];
        }
            n=n-1;

	    }
	    for(int i=0;i<n;i++)
	   {
	      cout<<a[i]<<endl;
	   }
	}
	return 0;
}
