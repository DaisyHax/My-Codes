#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q,k,n;
    cin>>q;
    while(q--)
    {
        cin>>k>>n;
        int arr[n];
        for(int i=0;i<n;i++)
           {
               cin>>arr[i];
           }
        int mat[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i>=j)
                    mat[i][j]=-1;
                else
                {   if(arr[j]<arr[i])
                       mat[i][j]=0;
                    else
                        mat[i][j]=arr[j]-arr[i];
                }
            }
        }
        int i=0,j=0,p=0;
        while(i!=n-1&&j!=n-1)
       {
        if(mat[i][j]!=-1)
        {
            p+=mat[i][j];
            i++;j++;
        }
       }

        /*for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<mat[i][j]<<"  ";
            }cout<<endl;
        }*/

    }
    return 0;
}
