#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	char a[1000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",&a);
		int n=0;
		for(unsigned int i=0;a[i]!='\0';++i)
        {n++;}
		unsigned int j,k,flag=1;
		for(k=0,j=n-1;k<n/2;k++,j--)
		{
			if(a[k]!=a[j])
            {
			flag=0;
            }
		}
        if(flag==0)
            cout<<"NO"<<endl;
		else
	    	cout<<"YES"<<endl;
	}
	return 0;
}
