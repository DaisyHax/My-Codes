#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

int main()
{
   node* head;
   head=NULL;
   node* ll=new node();
   ll->data=2;
   ll->next=NULL;
   head=ll;

   for(int i=0;i<4;i++)
   {
       ll=new node();
       ll->data=i+1;
       ll->next=NULL;
       node*temp;
       temp=head;
       while(temp->next!=NULL)
       {
           temp=temp->next;
       }
       temp->next=ll;
   }

   node* ptr=head;
   while(ptr!=NULL)
   {
       cout<<ptr->data<<"-> ";
       ptr=ptr->next;
   }
   cout<<"X"<<endl;
   return 0;
}
