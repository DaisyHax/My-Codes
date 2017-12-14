#include <bits/stdc++.h>
#define MAX 10001
using namespace std;
int prime(int n)
{
    int i,j,temp,count=0,ans;
    for(i=2;i<=MAX;i++)
    {
        temp=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                temp=1;
                break;
            }
        }
        if(temp==0)
            count++;
        if(count==n)
        {
            ans=i;
            break;
        }
    }
    return ans;
}
int main() {
    int n;
    int q;


    cin >> n >> q;
    int arr[n];
    stack <int> a[n],b[n];
    int x;
    for(int i=0;i<n;i++)
    {
        cin >>x;
        a[0].push(x);
    }
    for(int i=0;i<q;i++)
    {
        cout<<"hey1"<<endl;
        if((a[i].top())%(prime(i))==0)
        {cout<<"hey2"<<endl;
            b[i].push(a[i].top());
            a[i].pop();
        }
        else
        {cout<<"hey3"<<endl;
            a[i+1].push(a[i].top());
            a[i].pop();
        }
    cout<<"hey4"<<endl;
    }
    for(int i=0;i<q;i++)
    {cout<<"hey5"<<endl;
        while(!b[i].empty())
        {cout<<"hey6"<<endl;
            cout<<b[i].top()<<endl;
            b[i].pop();
        }cout<<"hey7"<<endl;
    }
    while(!a[q].empty())
        {cout<<"hey8"<<endl;
            cout<<a[q].top()<<endl;
            b[q].pop();
        }cout<<"hey9"<<endl;
    return 0;
}
