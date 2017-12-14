#include <bits/stdc++.h>
using namespace std;
int main()
{
    int choice,n,pid[10],at[10],cput[10],comptime=0,tat[10],wt[10];
    cout << "FIRST COME FIRST SERVE (Using Array)\n Enter the No. of processes : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {pid[i]=i+1;}
    for(int i=0;i<n;i++)
    {
        cout << " Enter the arrival time for process " <<(i+1)<<" :";cin>>at[i];
        cout << " Enter the CPU burst time for process " <<(i+1)<<" :";cin>>cput[i];
    }
    for(int i=0;i<n;i++)
    {
        if(comptime<at[i])
        {comptime+=(at[i]-comptime);}
            comptime+=cput[i];
            tat[i]=comptime-at[i];
            wt[i]=tat[i]-cput[i];
    }
    cout<<"\nDATA TABLE:\n";
    cout<<"PID\tAT\tCPUT\tTAT\tWT"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<pid[i]<<"\t"<<at[i]<<"\t"<<cput[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<"\n";
    }
    return 0;
}
