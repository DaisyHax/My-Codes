#include <bits/stdc++.h>

using namespace std;

int main()
{
    float t,s=0.00;int counter=1;
    do
    {
        counter=1;s=0.00;
        scanf("%f",&t);
        if(t==0.00)
            break;
        for(int i=0;i<275;i++)
        {
            s=s+(1/(float(i+2)));
            if(s>=t)
                break;
            else if(t<0.5)
            {
                counter=1;
                break;
            }
            else{counter++;}
        }
        cout<<counter<<" card(s)"<<endl;
    }while(t!=0.00);
    return 0;
}
