#include <bits/stdc++.h>
using namespace std;
int n;
int minfind(int at[])
{
    int smallest=at[0];
    for(int i=0;i<n;i++)
        if (at[i]<smallest)
             smallest=at[i] ;
    //cout<<smallest<<endl;
    return smallest;
}
int main()
{
    int choice,pid[10],at[10],cput[10],comptime=0,tat[10],wt[10],k,at1[10];
    cout << "SHORTEST JOB FIRST (Using Array)\n Enter the No. of processes : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {pid[i]=i+1;}
    at[10]={0};
    for(int i=0;i<n;i++)
    {
        cout << " Enter the arrival time for process " <<(i+1)<<" :";cin>>at[i];
        cout << " Enter the CPU burst time for process " <<(i+1)<<" :";cin>>cput[i];
    }
    for(int i=0;i<n;i++)
    {
        at1[i]=at[i];
    }
    int t=0;
    for(int i=0;i<2*n;i++)
    {
        if(minfind(at)<=t)
        {
            int a=minfind(at);
            for(int j=0;j<n;j++)
            {
                if(at[j]==a)
                {
                    k=j;
                    cout<<"P"<<(k+1)<<"=>";
                    break;
                }
            }
            if(comptime<at[k])
                {comptime+=(at[k]-comptime);}
            comptime+=cput[k];
            tat[k]=comptime-at[k];
            wt[k]=tat[k]-cput[k];
            at[k]=1000;
        }
        t++;
    }
    cout<<"\nDATA TABLE:\n";
    cout<<"PID\tAT\tCPUT\tTAT\tWT"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<pid[i]<<"\t"<<at1[i]<<"\t"<<cput[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<"\n";
    }
    return 0;
}
