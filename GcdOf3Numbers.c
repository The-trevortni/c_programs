#include<stdio.h>
int gcd(int,int);

int main()
{
    int n1,n2,n3,res;
    printf("Enter three values");
    scanf("%d%d%d",&n1,&n2,&n3);
    
    res=gcd(n1,gcd(n2,n3));
    printf("The GCD of %d  %d %d is = %d ",n1,n2,n3,res);
    return 0;
}

int gcd(int x,int y)
{ 
    if(y==0)
    return x;
    else
    return gcd(y,x%y);
  
  }