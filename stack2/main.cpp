#include <bits/stdc++.h>
using namespace std;
long int st[100001],top=-1;
void push(long int st[],long int x)
{
    top++;
    st[top]=x;
}
void pop(long int st[])
{
    top--;
}
int main()
{
    long int n,a[10001],q,x,sum=0;
    string inst;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>q>>x;
    int j=0;
    for(int i=0;i<q;i++)
    {
        cin>>inst;
        if(inst=="Harry")
        {
            sum+=a[j];
            push(st,a[j]);
            j++;

        }
        else
        {
            sum-=st[top];
            pop(st);
        }
        if(sum==x)
            {
                cout<<top+1<<endl;
                break;
            }
        else{continue;}
    }
    if(sum!=x)
    {
        cout<<-1<<endl;
    }
    return 0;
}
