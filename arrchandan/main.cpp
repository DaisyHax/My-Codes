#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    int n,r[5001],sum=0,top=-1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&r[i]);
        if(r[i]!=0)
        {
            top++;
            s.push(r[i]);
        }
        else if(r[i]==0 and !s.empty())
        { s.pop();}
    }
   while(!s.empty())
    {
    sum+=s.top();
    s.pop();
    }
    printf("%d",sum);
    return 0;
}
