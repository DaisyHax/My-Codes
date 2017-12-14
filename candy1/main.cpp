#include<iostream>
using namespace std;
int main()
{
int n,need,c,i;
while(5)
{
   need=0,c=0;
   cin>>n;
    if(n==-1)
    {break;}
    else
    {
     int  a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        need=need+a[i] ;
    }
    if(need%n!=0)
    {cout<<"-1"<<endl;}
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]<need/n)
            {
                c=c+(need/n)-a[i];
            }
        }
        cout<<c<<endl;
    }
    }
}
return 0;
}
