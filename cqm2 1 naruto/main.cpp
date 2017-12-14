#include <bits/stdc++.h>
#define lo long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lo l,r;
        cin>>l>>r;
        lo tot=0;
        if(l==0)
        {
            l=l+1;
        }
        for(lo i=l;i<=r;i++)
        {
            lo n=i;
            //cout<<"N"<<n<<endl;
            lo sum=0,dig=0;
           do{
            int x=n%10;
            dig++;
            sum+=x*x;
            n/=10;
           }while(n>0);

            lo c=0,n1=i,fal=0;
           do{
            int x=n1%10;
            if(x!=0)
            {
                if(sum%x==0)
                    c++;
                else
                {
                    fal=1;
                    break;
                }
                //cout<<"fal"<<fal<<endl;
            }

            n1/=10;
           }while(n1>0);

           if(fal==0)
            tot++;
        }
        cout<<tot<<endl;
    }
    return 0;
}
