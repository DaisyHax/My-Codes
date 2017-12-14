#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,flag;
    char a[1000];
    while(1)
    {
        cin>>n;
        if(n== 0)
            break;
        cin>>a;
        int k =0;
        for(i=0;i<n;i++)
        {
            k = k+1;
            flag = 0;
            for(j = i;j<strlen(a);j+=n)
            {
                if(flag == 0)
                {
                    cout<<a[j];
                    flag = 1;
                }
                else
                {
                    cout<<a[j+n-k-i];
                    flag = 0;
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
