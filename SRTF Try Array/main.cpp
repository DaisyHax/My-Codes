#include <bits/stdc++.h>
using namespace std;
int n;
int minfind(int at[])
{
    cout<<"enter minfind func\n";
    int smallest=at[0];
    for(int i=0;i<n;i++)
        if (at[i]<smallest)
             smallest=at[i] ;
    return smallest;
}
int findi(int at[],int cput[],int t)
{   int tes[10]={0},bt[10]={0},found;
    cout<<"enter findi func\n";
    for(int i=0;i<n;i++)
       {
          if(at[i]<=t)
            {
               tes[i]=at[i];
            }
       }
    for(int i=0;i<n;i++)
    {
        while(tes[i]!=0)
        {
            bt[i]=cput[i];
        }
    }
    int mincpu=minfind(bt);
    for(int j=0;j<n;j++)
            {
                if(cput[j]==mincpu)
                {
                    int m=j;
                    found=at[m];
                }
            }
            cout<<"output recd findi"<<found<<"\n";
    return found;
}
int main()
{
    int choice,pid[10],at[10],cput[10],cput1[10],comptime[10]={0},tat[10],wt[10],k,at1[10],pro[10];
    cout << "SHORTEST REMAINING TIME FIRST (Using Array)\n Enter the No. of processes : ";
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
        cput1[i]=cput[i];
        at1[i]=at[i];
    }
    int t=0;
    for(int i=0;i<2*n;i++)
    {
        cout<<"enter for1 \n";
        if(findi(at,cput,t)<=t) //WRONG CONDITION HERE
        {
            cout<<"enter if1\n";
            int a=findi(at,cput,t);
            for(int j=0;j<n;j++)
            {
                cout<<"enter for 2\n ";
                if(at[j]==a)
                {
                    cout<<"enter if 2\n";
                    k=j;
                    pro[k]=cput[k];
                    cout<<"P"<<(k+1)<<"=>";
                    t++;
                    pro[k]--;
                    comptime[k]++;
                    cout<<"comptime["<<k<<"]"<<comptime[k]<<endl;
                    break;
                }
            }
            tat[k]=comptime[k]-at[k];
            wt[k]=tat[k]-cput[k];
        }

    }
    cout<<"\nDATA TABLE:\n";
    cout<<"PID\tAT\tCPUT\tCT\tTAT\tWT"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<pid[i]<<"\t"<<at1[i]<<"\t"<<cput1[i]<<"\t"<<comptime[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<"\n";
    }
    return 0;
}
