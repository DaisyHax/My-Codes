#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l;
        cin>>l;
        string s[l],t;
        for(int i=0;i<l;i++)
        {
            cin>>s[i];
        }
        cin>>t;
        for(int j=0;j<l;j++)
        {
            string q;
             q=t.substr(0,s[j].length()-1);
              cout<<q<<" this is substr"<<endl;
            for(int i=0;i<t.length();i++)
            {


                if(q[i]==s[j][i])
                {   cout<<s[j][i]<<"true"<<endl;
                    /*if(t.length()>s[j].length())
                    {
                        cout<<t[t.length()-s[j].length()-1]<<"   ";
                    }*/
                }
            }
        }
    }
    return 0;
}
