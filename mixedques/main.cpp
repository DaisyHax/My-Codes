#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pro[10][7],mem[10][2],ready[10],n,m,ct=0,totalcpu=0,totalat=0,rea;
    cout<<"Enter the no. of processes: ";
    cin>>n;
    cout<<"Enter the process no. , arrival time, cpu time ,process size : \n";
    for(int i=0;i<n;i++)
    {
        ready[i]=0;
        cin>>pro[i][0]>>pro[i][1]>>pro[i][2]>>pro[i][3];
        totalcpu+=pro[i][2];
        totalat+=pro[i][1];
    }
    cout<<"Enter the no. of memory blocks: ";
    cin>>m;
    cout<<"Enter the memory block no. , memory size : \n";
    for(int i=0;i<m;i++)
    {
        cin>>mem[i][0]>>mem[i][1];
    }
    while(ct!=totalat)
    {
    for(int i=0;i<n;i++)
    {
        if(pro[i][1]==ct)
        {
            for(int j=0;j<m;j++)
            {
                if(pro[i][3]<=mem[j][1])
                {
                    cout<<pro[i][0]<<"->"<<mem[j][0]<<endl;
                    mem[j][1]-=pro[i][3];
                    break;
                }
                else{
                    cout<<pro[i][0]<<" waiting for free memory "<<endl;
                }
            }
            for(int k=0;k<n;k++)
            {
                if(ready[k]==0)
                {
                    ready[k]=pro[i][0];
                    break;
                }
            }
          // min_element(,myints+7)

        }
    }
    int mini=100;
    for(int l=0;l<n;l++)
    {
        rea=ready[l]-1;
        if(mini>=pro[rea][2])
        {
            mini=pro[rea][2];

        }
    }
    if(pro[rea][2]!=0)
   {
        pro[rea][2]--;
   }
    ct++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<pro[i][0]<<"\t"<<pro[i][1]<<"\t"<<pro[i][2]<<"\t"<<pro[i][3]<<endl;
    }
    cout<<"ready queue:";
    for(int k=0;k<n;k++)
            {
                cout<<ready[k]<<"   ";

            }
    return 0;
}
