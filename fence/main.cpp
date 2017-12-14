#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;float area,r;
    while(1)
    {
        cin>>n;
        if(n==0)
        {break;}
        else
        {
            r=n/3.14159;
            area=(3.14159*r*r)/2;
            printf("%.2f \n",area);
        }
    }
    return 0;
}
