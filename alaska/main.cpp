#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   scanf("%d",&n);
   while(n)
   {
      int arr[n];
      for(int i=0; i<n ; ++i)
         scanf("%d",&arr[i]);
      sort(arr,arr+n);
      int i=0,flag=0;
      while(i!=n-1)
      {
         /*Checking for each consecutive differences*/
         if(arr[i+1]-arr[i]>200)
         {
            flag=1;
            break;
         }
         i++;
      }
      /*If flag is set, that means somewhere, intermediate distance is more than 200*/
      if(flag)
         printf("IMPOSSIBLE\n");
      else if(i==n-1)
      {
         /*We have a to check if the car can return back. For this to happen, the twice of the distance
         between the last charging point and the destination should be less than equal to 200*/
         int lastDistTwice=1422-arr[i];
         lastDistTwice*=2;
         if(lastDistTwice>200)
            printf("IMPOSSIBLE\n");
         else
            printf("POSSIBLE\n");
      }
      scanf("%d",&n);
   }
   return 0;
}
