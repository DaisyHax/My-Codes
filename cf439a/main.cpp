#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int x[n],y[n],c=0,arr[2*n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<n;i++)
        cin>>y[i];
    for(int i=0;i<n;i++)
    {
        arr[i]=x[i];
    }
    for(int i=n;i<2*n;i++)
    {
        arr[i]=y[i-n];
    }
    sort(arr,arr+2*n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(binary_search(arr,arr+(2*n),(x[i]^y[j])))
                c++;
        }
    }
    if(c%2==0)
        cout<<"Karen"<<endl;
    else
        cout<<"Koyomi"<<endl;
return 0;
}
