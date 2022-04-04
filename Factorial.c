#include<stdio.h>
int factorial(int);
int main()
{
    int n,res;
    scanf("%d",&n);
    res=factorial(n);
    printf("%d",res);

    return 0;
}

int factorial(int n)
{
   if(n>0)
           return n*factorial(n-1);
    else
        return 1;
}