#include<stdio.h>
int fact(int);

int main()
{
    int n,res;
    printf("Enter the values whose factorial is to be find");
    scanf("%d",&n);
    
    res=fact(n);
    printf("The factorial of %d is = %d ",n,res);
    return 0;
}

int fact(int x)
{
     if(x>1)
     return x+fact(x-1);
     else
     return 1;
}