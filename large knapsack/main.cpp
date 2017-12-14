#include <bits/stdc++.h>
#define lo long long int
using namespace std;

int main()
{
	int k;
	int n;
	scanf("%d %d",&k,&n);
	int v[n],w[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&v[i],&w[i]);
	}
	int arr[n+1][k+1];
	for(int i=0;i<=n;++i)
	{
		for(int j=0;j<=k;++j)
		{
			if(i==0||j==0)
			{
				arr[i][j]=0;
			}
			else if(w[i-1]<=j)
			{
				arr[i][j]=max((arr[i-1][j-w[i-1]]+v[i-1]),arr[i-1][j]);
			}
			else
			{
				arr[i][j]=arr[i-1][j];
			}
		}
	}
	printf("%d",arr[n][k]);
	return 0;
}
