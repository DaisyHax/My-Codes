#include<iostream>
using namespace std;
int main()
{
 long long int n,sum,i;
 while(1)
 {
  cin>>n;
  if(n==-1)
     {break;}
  else
  {
    i=0;sum=1;
    while(1)
    {
     sum=sum+(6*i);
     if(sum>n)
     {
      cout<<"N"<<endl;
      break;
     }
     else if(sum==n)
     {
      cout<<"Y"<<endl;
      break;
     }
     else
     {i=i+1;}
    }
  }
 }
 return 0;
}
