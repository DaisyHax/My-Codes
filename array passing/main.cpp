#include <bits/stdc++.h>

using namespace std;

void display(int *q,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            cout<<*(q+i*col+j);
        cout<<endl;
    }
}
void show(int (*q)[4],int row,int col)
{
    int i,j;
    int *p;
    for(i=0;i<row;i++)
    {
       // p=q+i;
        for(j=0;j<col;j++)
        {
            printf("%d",*(p+j));
        }printf("\n");
    }
}

void print(int q[][4],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            printf("%d",q[i][j]);
        printf("\n");
    }
}
int main()
{
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    //display(a,3,4);
    //show(a,3,4);
    print(a,3,4);
    return 0;
}
