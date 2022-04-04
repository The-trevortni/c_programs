#include <stdio.h>
int fib(int,int); 

int main()
{
  int p,n=1;
scanf("%d",&p);
   
fib(n,p); 

return 0;
}
int  fib(int i ,int n)
{
    if(i<=n)
   { 
     printf("%d\n",i);
      fib(i+1,n);
   }
     else
     return 1;
}