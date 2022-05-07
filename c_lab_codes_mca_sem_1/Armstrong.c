#include<stdio.h>
int main()
{
    int number,i,sum;

  printf("Enter the number to check whether it is armstrong number or not ");
  scanf("%d",&number);
  int p=number;
  while(number>0)
        {
           int r=number%10;
           int p=r*r*r;
           sum=sum+p;
            number=number/10;
         }
    if(sum==p)
       {
         printf("number is armstrong number");
        }
    else
       {
         printf("number is not armstrong number");
         }

    return 0;
}