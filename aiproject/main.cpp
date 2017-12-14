#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int loop;
    loop=rand()%60+1;
    int x=loop;
    int w[loop],v[loop],t[loop];
    string result[loop];
    while(loop--)
    {
    cout<<"Running # ";
    cout<<loop<<endl;
    cout<<"Wavelength of current tide: ";
    w[loop]=rand()%50+180;
    cout<<w<<endl;
    cout<<"Enter velocity: ";
    v[loop]=rand()%50+770;
    cout<<v<<endl;
    cout<<" Estimated hit time (minutes) : ";
    t[loop]=rand()%60+30;
    cout<<t<<endl;
    if(w[loop]>200&&v[loop]>800&&t[loop]<60)
    {
        cout<<endl<<endl<<"WARNING!!! TSUNAMI"<<endl;
        cout<<"Activate RPS reactor protection system!"<<endl;
        cout<<"Activating..."<<endl;
        cout<<"Reactor ready to engage with tsunami in"<<endl;
        for(int i=10;i>=1;i--)
        {
            cout<<"T-"<<i;
            cout<<" seconds"<<endl;
        }

        cout<<"READY!!!"<<endl<<endl;
        result[loop]="TSUNAMI!-Reactor SAFE";
    }
    else
    {
        cout<<endl<<"NO TSUNAMI! "<<endl<<endl;
        result[loop]="No Tsunami";
    }

    }
    cout<<"S.no.            Wavelength     Velocity      Est. time        RESULT"<<endl<<endl;
    for(int i=0;i<x;i++)
    {

        cout<<i+1<<"                ";
        cout<<w[i]<<"            ";
        cout<<v[i]<<"           ";
        cout<<t[i]<<"min      ";
        cout<<result[i]<<endl;
    }
    return 0;
}
