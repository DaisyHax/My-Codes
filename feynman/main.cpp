#include <iostream>

using namespace std;
int ans(int n)
{
    int prod=0;
    for(int i=n;i>0;i--)
    {
        prod=prod+(n*n);
        n--;

    }
    return prod;

}
int main()
{
    int t;
    do
    {
        cin>>t;
        if(t==0)
        {
            break;
        }
        else
        {
        int p=ans(t);
        cout<<p<<endl;
        }

    }while(t!=0);
    return 0;
}
