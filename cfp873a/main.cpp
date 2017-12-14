#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,sum=0;
    cin>>n>>k>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-k;i++)
        sum+=a[i];
    sum+=(k*x);
    cout<<sum<<endl;
    return 0;
}
