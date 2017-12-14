#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string pt,key,ans;
    cin>>t;
    while(t--)
    {
        cin>>pt;
        cin>>key;
        int l=pt.length(); int n=key.length();
        if(n<l)
        {
            for(int i=0;i<(l/n)-1;i++)
            {
                key.append(key);
            }
            for(int i=0;i<l%n;i++)
            {
                key+=key[i];}
        }
       // cout<<pt<<endl;
        //cout<<key<<endl;
        for(int i=0;i<l;i++)
        {
            int x=(int(pt[i])+int(key[i])-96);
            if(int(x)>122)
                ans[i]=(int(pt[i])+(int(key[i])-122));
            else
                ans[i]=x;
           cout<<ans[i];
        }cout<<endl;
    }
    return 0;
}
