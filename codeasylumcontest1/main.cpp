#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int lastAns=0,n,q;
    cin>>n>>q;
    vector < vector<int> > v;
    v.resize(n,vector<int>());
    ll no,x,y,pos=0;
    for(int i=0;i<q;i++)
    {
        cin>>no>>x>>y;
        if(no==1)
        {
            pos=(x^lastAns)%n;
            v[pos].push_back(y);
        }
        else
        {
            pos=(x^lastAns)%n;
            lastAns=v[pos][y%(v[pos].size())];
            cout<<lastAns<<endl;
        }
    }
    return 0;
}
