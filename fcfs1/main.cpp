#include <bits/stdc++.h>
using namespace std;

int main()
{
    int job[10][6],n;
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
    }
    job[0][3]=job[0][2];
    job[0][4]=0;
    job[0][5]=0;job[1][4]=0;job[1][5]=0;
    for(int i=1;i<n;i++)
    {
        job[i][3]=job[i-1][3]+job[i][2];
        job[i][4]=job[i][3]-job[i][2];
        job[i][5]=job[i][4]-job[i][1];
    }
    cout<<"pno. \t at \t bt \t ct \t tat \t wt\n";
    for(int i=0;i<n;i++)
    {

        cout<<job[i][0]<<"\t"<<job[i][1]<<"\t"<<job[i][2]<<"\t"<<job[i][3]<<"\t"<<job[i][4]<<"\t"<<job[i][5]<<endl;
    }
    return 0;
}
