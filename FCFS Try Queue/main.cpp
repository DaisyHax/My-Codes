#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z,comptime=0;
    cout << "Enter no. of Processes:";cin>>n;
    queue <int>pid,at,cput,tat,wt,at1,cput1,tat1;
    for(int i=0;i<n;i++)
    {
        cout << " Enter the process no. :";cin>>x;pid.push(x);
        cout << " Enter the arrival time for process " <<(i+1)<<" :";cin>>y;at.push(y);
        cout << " Enter the CPU burst time for process " <<(i+1)<<" :";cin>>z;cput.push(z);
        if(comptime<at.front())
        {comptime+=(at.front()-comptime);}

        comptime+=cput.front();
        tat.push(comptime-at.front());
        wt.push(tat.front()-cput.front());
        at1.push(at.front());cput1.push(cput.front());tat1.push(tat.front());
        at.pop();cput.pop();tat.pop();
    }
    cout<<"\n\nPID\tAT\tCPUT\tTAT\tWT"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<pid.front()<<"\t"<<at1.front()<<"\t"<<cput1.front()<<"\t"<<tat1.front()<<"\t"<<wt.front()<<"\n";
        pid.pop();at1.pop();cput1.pop();tat1.pop();wt.pop();
    }
    return 0;
}
