#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,c=0;
    cin>>n>>m;
    char x;
    while(cin>>x)
    {
        if(x=='C'||x=='M'||x=='Y')
            c=1;
    }
    if(c==0)
        cout<<"#Black&White"<<endl;
    else
        cout<< "#Color"<<endl;
    return 0;
}
