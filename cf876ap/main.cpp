#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c,path=0,curr=1;
    cin>>n>>a>>b>>c;
    if(n-1==0)
        cout<<path<<endl;
    else
    {
        for(int i=1;i<n;i++)
        {
            if(curr==1)
            {
                if(a<b)
                {
                    path+=a;
                    curr=2;
                }
                else
                {
                    path+=b;
                    curr=3;
                }
            }
            else if(curr==2)
            {
                if(a<c)
                {
                    path+=a;
                    curr=1;
                }
                else
                {
                    path+=c;
                    curr=3;
                }
            }
            else
            {
                if(b<c)
                {
                    path+=b;
                    curr=1;
                }
                else
                {
                    path+=c;
                    curr=2;
                }
            }
        }

        cout<<path<<endl;
    }

    return 0;
}
