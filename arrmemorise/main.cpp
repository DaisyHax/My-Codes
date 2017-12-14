    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        long int n,a[100001],b[100001],d[100001],q,c=0;
        cin>>n;
        for(long int i=0;i<n;i++)
        {
            d[i]=0;
        }
        for(long int i=0;i<n;i++)
        {
            cin>>a[i];
            d[a[i]]++;
        }
        cin>>q;
        for(long int i=0;i<q;i++)
        {
            cin>>b[i];
        }
        for(long int i=0;i<q;i++)
        {
            if(d[b[i]]!=0)
            {
                cout<<d[b[i]]<<endl;
            }
            else
            {
               cout<<"NOT PRESENT"<<endl;
            }
        }

        return 0;
    }
