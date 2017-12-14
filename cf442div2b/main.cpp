#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1="",s2="",s3="";
    int ans=0,sum=0;
    cin>>s;
    if(s.length()==1)
        cout<<1<<endl;
    else
    {
        int i=0,x=0,j=0,k=1,a=0,b=0,c=0;
    while(i<=s.length())
    {
     //   cout<<"OK"<<s[i]<<endl;
        if(s[i]==s[j])
        {
            if(s[i]=='a'&&x==0)
            {
                a++;
                cout<<"A"<<a<<endl;
            }
            else if(s[i]=='b'&& x!=2)
            {
                x=1;
                b++;
                cout<<"b"<<b<<endl;

            }
            else if(s[i]=='a'&& x==1)
            {
                c++;
                cout<<"c"<<c<<endl;
                if(s[i+1]!='a')
                    x=2;

            }
            else if(x==2||j==s.length())
            {
                cout<<"s[i]"<<s[i]<<endl;
                ans=max(sum,a+b+c);
                cout<<"ANS"<<ans<<endl;
                sum=ans;
                a=b=c=x=0;
            }
            j++;
        }
        else if(s[i]!=s[j])
        {
            i=j;
        }

    }
    cout<<ans<<endl;
    }
    return 0;
}


/*cout<<s[i]<<endl;
        if(s[i]=='a'&&x==0)
        {
            for(int j=i;j<s.length();j++)
            {
                if(s[j]=='b')
                {
                    cout<<"here1"<<endl;
                    s1=s.substr(i,j-1);
                    cout<<s1<<endl;
                    i+=(j-1);
                    x=1;
                    break;
                }
            }
        }
        else if(s[i]=='b')
        {
            for(int j=i;j<s.length();j++)
            {
                if(s[j]=='a')
                {
                    cout<<"here2"<<endl;
                    s2=s.substr(i,j-1);
                    cout<<s2<<endl;
                    i+=(j-1);
                    x=1;
                    break;
                }
            }
        }
        else if(s[i]=='a'&&x==1)
        {
            for(int j=i;j<s.length();j++)
            {
                if(s[j]=='b'||i==s.length()-1)
                {
                    cout<<"here"<<endl;
                    s3=s.substr(i,j-1);
                    i+=(j-1);
                    x=2;
                    break;
                }
            }
        }
        i++;
        if(x==2)
        {
            int sum=s1.length()+s2.length()+s3.length();
            cout<<s1.length();
            cout<<s1<<endl;
            if(sum>ans)
                ans=sum;
        }
    }*/
