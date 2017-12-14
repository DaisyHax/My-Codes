#include <iostream>

using namespace std;

int main()
{
    int countr;
    long long int n;
    string s;
    char a[1000002];
    cin>>n>>s;
    //h=2 a=2 c=1 k=1 e=2 r=2 t=1
    for(int i=0;i<n;i++)
    {
        a[s[i]]++;
        if(h%2==0&&a%2==0&&e%2==0&&r%2==0&&c%1==0&&k%1==0&&t%1==0)
        {
            countr++;
        }
    }
    cout<<countr<<endl;
    return 0;
}
