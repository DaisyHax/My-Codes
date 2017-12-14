#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,a[5];
    a[0]="Danil";
    a[1]="Olya";
    a[2]="Slava";
    a[3]="Ann";
    a[4]="Nikita";
    cin>>s;
    s=s+"j";
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        for(int j=1;j<s.length();j++)
        {
            string str=s.substr(i,j);
            if(str==a[0]||str==a[1]||str==a[2]||str==a[3]||str==a[4])
                c++;
        }
    }
    if(c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
