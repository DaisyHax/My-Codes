#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;;
    char str[1000000];
    cin>>t;
    while(t--)
    {
        c=0;
        scanf("%s",&str);
        for(unsigned int i=0;str[i]!='\0';++i)
        {
            if(str[i]=='A'||str[i]=='I'||str[i]=='O'||str[i]=='E'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                c++;
        }
        cout<<c<<endl;
    }

    return 0;
}
