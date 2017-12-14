#include <bits/stdc++.h>
using namespace std;
long int st[100001],top=-1;long int n=0;

void push(long int st[],long int cost)
{
        top+=1;
        st[top]=cost;
}
void pop(long int st[])
{
    top--;
}
bool isEmpty ( )
    {
        if ( top == -1 )  //Stack is empty
            return true ;
        else
            return false;
    }

int main()
{
   long int q,c;
   int type;
   cin>>q;
   while(q--)
   {
       cin>>type;
       if(type==1)
       {
           if(isEmpty())
               {
                   cout<<"No Food"<<endl;
               }
               else
               {
                   cout<<st[top]<<endl;
                   pop(st);
               }
       }
       else
       {
           n++;
           cin>>c;
           push(st,c);
       }
   }
    return 0;
}
