#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;long long int term3,last3,sum,d,n,a,i;
    scanf("%d",&t);
    while(t--)
    {
        cin>>term3>>last3>>sum;
        n=(2*sum)/(term3+last3);
        d=(last3-term3)/(n-5);
        a=term3-2*d;
        cout<<n<<endl;
        for(i=0;i<n;i++)
        {
           cout<<a<<" ";
           a=a+d;
        }cout<<endl;
    }
    return 0;
}
