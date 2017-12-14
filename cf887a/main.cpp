#include <bits/stdc++.h>

using namespace std;

int main()
{
    string num;
    cin>>num;
    int c=0,a=0;
    for(int i=0;i<num.length();i++)
    {
        if(num[i]=='1')
            a=1;
        if(num[i]=='0'&&a==1)
            c++;
    }
    if(c>=6)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}
