#include<stdio.h>
int main()
{
 int num1,num2,quotient,remainder;
 printf("enter two numbers ");
 scanf("%d %d",&num1,&num2);
if(num1>num2)
{
    quotient=num1/num2;
    remainder=num1%num2;
}
else
{

 quotient=num2/num1;
    remainder=num2%num1;
}


 printf("Quotient is equal = %d \n",quotient);
 printf("Remainder is equal = %d",remainder);




return 0;
}