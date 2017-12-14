#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
int n,q;
    cin>>n;
    string a[100000];
    for(int i=1;i<=n;i++)
        cin>>a[i];
 cin>>q;
    int l,r,ans[q];
    string s;
    for(int i=0;i<q;i++)
    {
        cin>>l>>r>>s;
        char maxm='a';
        for(int j=0;j<s.length();j++)
        {
            if(s[j] > maxm)
                maxm=s[j];
            //cout<<minm<<" ";
        }
        int cnt=0;
        for(int k=l;k<=r;k++)
        {//cout<<endl<<k<<endl;
            int c=0;
            for(int j=0;j<a[k].length();j++)
            {
                if(a[k][j]<=maxm)
                {//cout<<a[k][j]<<"gdg"<<endl;
                    c++;
                    //cout<<c<<" C "<<endl;
                }
            }
            if(c==a[k].length())
                cnt++;
            //cout<<"length "<<a[k].length()<<endl;
            //cout<<cnt<<" Cnt "<<endl;
        }
        ans[i]=cnt;
    }
    for(int i=0;i<q;i++)
    {
        cout<<ans[i]<<endl;
    }

    return 0;
}
