 #include <bits/stdc++.h>
using namespace std;

int main()
{
       int job[10][6],n,cur=0,total=0;
       int mini=1000,arr[10],a[10];
       cout<<"Enter the no. of processes:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        job[i][0]=i+1;
    }
    cout<<"enter the arrival time of job :\n";
    for(int i=0;i<n;i++)
    {
        cin>>job[i][1];
    }
    cout<<"enter the burst time of job :\n";
    for(int i=0;i<n;i++)
    {
        cin>>job[i][2];
        total+=job[i][2];
    }
    cout<<total<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(job[j][1]<job[i][1])
            {
                int temp=job[i][1];
                job[i][1]=job[j][1];
                job[j][1]=temp;

                int temp1=job[i][2];
                job[i][2]=job[j][2];
                job[j][2]=temp1;

                int temp2=job[i][0];
                job[i][0]=job[j][0];
                job[j][0]=temp2;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=job[i][1];
        a[i]=job[i][2];
    }
    cur=job[0][2];
    job[0][3]=job[0][2];
    int m=0;
    int index;
    job[0][1]=10000;
while(cur<=total)
{
    for(int i=1;i<n;i++)
    {
    mini=1000;
        if(job[i][1]<=cur&&job[i][2]<=mini)
        {cout<<"compare "<<i+1<<"\t"<<endl;
                mini=a[i];
                index=i;
        }
    }

    cur+=a[index];
    //tot+=a[index];
    job[index][3]=cur;
    job[index][1]=10000;
    //job[index][2]=1000;
    cout<<index+1<<"---->>"<<endl;
}

    for(int i=0;i<n;i++)
    {
        job[i][4]=job[i][3]-a[i];
        job[i][5]=job[i][4]-arr[i];
    }
    cout<<"\npno. \t at \t bt \t ct \t tat \t wt\n";
    for(int i=0;i<n;i++)
    {

        cout<<job[i][0]<<"\t"<<arr[i]<<"\t"<<a[i]<<"\t"<<job[i][3]<<"\t"<<job[i][4]<<"\t"<<job[i][5]<<endl;
    }
       return 0;
}
