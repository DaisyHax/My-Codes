#include <bits/stdc++.h>
#define lo long long int
using namespace std;

int main()
{
    int t;
    string a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        lo l1=a.length();
        lo l2=b.length();
        cout<<l1*l2<<endl;
    }
    return 0;
}
