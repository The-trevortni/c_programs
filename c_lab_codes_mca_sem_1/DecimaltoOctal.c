#include<stdio.h>
int factorial(int);
int main()

{
    int n,i=1,res;
    scanf("%d",&n);
   
  while(n>0)
  {
       res=res+(n%8)*100;
   //     i=i*10;
       n=n/8;
  } 
printf("%d",res);
    return 0;
}

