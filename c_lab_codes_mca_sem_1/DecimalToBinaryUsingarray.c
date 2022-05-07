#include <stdio.h>
void bin(int);

int main ()
{
   int n,r;
   printf("enter the number :");
   scanf("%d",&n);
bin(n);
   return 0;
}
void  bin (int n)
{
    
    int s[32];
    int r=0;
    while(n>0)
    {
    s[r]=n%2;
    n=n/2;
    r++;
    }
  for(int i=r-1;i>=0;i--)
     {
            printf("%d",s[i]);

     }
}