#include<bits/stdc++.h>
int main(){
    long long int n;
    int test,l,t,j,m,x;
    char a[1000];
    scanf("%d",&test);
    for(j=0;j<test;j++){
        scanf("%s %lld",a,&n);
     m=a[strlen(a)-1]-48;
     if(m==0&&n==0)
         t=0;
     else if(n==0)
          t=1;
     else{
   l=n%4;
            if(l==0)
             x=pow(m,4);
            else
                x=pow(m,l);
            t=x%10;
  }
    printf("%d\n",t);
    }
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;long long int a,b;
    scanf("%d",&t);
    while(t--)
        {
            scanf("%lld %lld",&a,&b);
        int x=a%10;
        if(x==0||x==1||x==5||x==6)
            { printf("%d",x);}
        else if(x==4)
            { if(b%2==1) printf("4");else printf("6");}
        else if(x==9)
            { if(b%2==1) printf("9");else printf("1");}
        else if(x==2)
            { if(b%4==1) printf("2");else if(b%4==2) printf("4");else if(b%4==3) printf("8");else printf("6");}
        else if(x==3)
            { if(b%4==1) printf("3");else if(b%4==2) printf("9");else if(b%4==3) printf("7");else printf("1");}
        else if(x==7)
            { if(b%4==1) printf("7");else if(b%4==2) printf("9");else if(b%4==3) printf("3");else printf("1");}
        else if(x==8)
            { if(b%4==1) printf("8");else if(b%4==2) printf("4");else if(b%4==3) printf("2");else printf("6");}
        printf("\n");
        }
    return 0;
}*/

