#include <bits/stdc++.h>
using namespace std;

void IterativeNestedLoop(int depth, int max)
{
    // Initialize the slots to hold the current iteration value for each depth
    int* slots = (int*)alloca(sizeof(int) * depth);
    for (int i = 0; i < depth; i++)
    {
        slots[i] = 0;
    }

    int index = 0;
    while (true)
    {
         prod=noob[i]*noob[j]*noob[k];
                //cout<<"product:"<<prod<<endl;
                if(prod<=q)
                {counter++;
                //cout<<"coun"<<counter<<endl;
                }

        // Increment
        slots[0]++;

        // Carry
        while (slots[index] == max)
        {
            // Overflow, we're done
            if (index == depth - 1)
            {
                return;
            }

            slots[index++] = 0;
            slots[index]++;
        }

        index = 0;
    }
}

int main()
{
    int t,n,i,j,k;
    long long int q,noob[1000],prod=1,counter=0;
    cin>>t;
    while(t--)
    {
        cin>>n;cin>>q;
        for(int a=0;a<n;a++)
        {
            cin>>noob[a];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                {
                prod=noob[i]*noob[j]*noob[k];
                //cout<<"product:"<<prod<<endl;
                if(prod<=q)
                {counter++;
                //cout<<"coun"<<counter<<endl;
                }
                }
            }
        }cout<<counter<<endl;
    }
    return 0;
}
