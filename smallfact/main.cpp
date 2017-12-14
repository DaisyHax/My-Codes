#include <iostream>
using namespace std;
int main()
{
    int t,n;long long int fact=1;
    cin>>t;
    while(t--)
    {
        fact=1;
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
        }
        else
        {
            for(int i=n;i>1;i--)
            {
                fact=fact*i;
            }
            cout<<fact<<endl;
        }
    }
    return 0;
}
