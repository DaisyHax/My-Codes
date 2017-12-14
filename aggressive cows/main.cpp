#include <bits/stdc++.h>
using namespace std;
int n,c;
int func(int num,int ar[])
{
    int cows=1,pos=ar[0];
    for (int i=1; i<n; i++)
    {
        if (ar[i]-pos>=num)
        {
            pos=ar[i];
            cows++;
            if (cows==c)
                return 1;
        }
    }
    return 0;
}
int bs(int arr[])
{
    int start=0,last=arr[n-1],max=-1;
    while (last>start)
    {
        int mid=(start+last)/2;
        if (func(mid,arr)==1)
        {
            if (mid>max)
                max=mid;
            start=mid+1;
        }
        else
            last=mid;
    }
    return max;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>c;
        int a[n];
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        int ans=bs(a);
        cout<<ans<<endl;
    }
    return 0;
}
