#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long int n,crds;long long int s=0;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
        s+=(2+3*(i));
        }
        cout<<s%1000007<<endl;

    }
}
