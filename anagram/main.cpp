#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string ana,pat;
    cin>>t;
    while(t--)
    {
        int co=0;
        cin>>ana;
        cin>>pat;
        //cout<<ana<<endl;
        //cout<<pat<<endl;
        int a[26],b[26];
        for(int i=0;i<26;i++)
            {a[i]=0;}
        for(int i=0;i<pat.length();i++)
        {
            a[(int)pat[i]-97]++;
            cout<<a[(int)pat[i]-97]<<endl;
        }
    for(int i=0;i<ana.length()-pat.length()+1;i++)
    {
        for(int i=0;i<26;i++)
            {b[i]=0;}
        for(int j=i;j<i+pat.length();j++)
        {
            b[(int)ana[j]-97]++;
            cout<<"B"<<ana[j]<<"  "<<b[(int)ana[j]-97]<<"         ,";
        }cout<<endl;
        int c=0;
        for(int j=0;j<26;j++)
        {cout<<a[j]<<"  &" <<b[j]<<endl;
            if(a[j]!=b[j])
                break;
            else if(a[j]==b[j]&&a[j]!=0)
                c++;
            cout<<c<<endl;
        }
        if(c!=0)
            {co++;
                cout<<"I"<<i<<endl;
            }
    }cout<<co<<endl;
        /*char ch='b';
        cout<<(ch - 'a')<<endl;*/
    }
    return 0;
}
