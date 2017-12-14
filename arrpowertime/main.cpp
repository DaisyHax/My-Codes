#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
cin>>N;
int co[N],i,j,io[N];
for(i=0;i<N;i++)
cin>>co[i];
for(i=0;i<N;i++)
cin>>io[i];
int time=0;
i=0,j=0;
int k;
while(i<N)
{
if(co[j]==-1){
j=(j+1)%N;
continue;
}
if(io[i]!=co[j])
time++;
else{
co[j]=-1;
i++;
time++;
}
j=(j+1)%N;
}
cout<<time<<endl;
return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n,call[100001],ide[100001],c=0,time=0,index=0;
    queue<long int> q;
    scanf("%ld",&n);
    for(long int i=0;i<n;i++)
    {
        scanf("%ld",&call[i]);
        q.push(call[i]);
    }
    for(long int i=0;i<n;i++)
    {
        scanf("%ld",&ide[i]);
    }
    for(long int i=0;i<n;i++)
    {
        if(call[i]==ide[i])
        {
            c++;
            cout<<"c="<<c<<endl;
        }
        else
        {
            for(long int j=0;j<n;j++)
            {
                if(call[j]==ide[i])
                {
                    index=j;
                }
            }
            for(long int l=0;l<index-i;i++)
              {
                for(long int l=0;l<n-1;l++)
                {
                    q.push(q.front());
                    q.pop();
                }
                time++;
                cout<<"time="<<time<<endl;
              }
              c++;

        }
    }
    printf("%ld",time+c);
    return 0;
}*/
