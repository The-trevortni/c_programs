#include<stdio.h>
int main()
{
int choice,num1,num2,c;
printf("Enter the choice 1 for (Bitwise AND) ,2 for (Bitwise OR) or  3 for (Bitwise XOR) \n");
scanf("%d",&choice);
printf(" Enter two values to perform bitwise operators ");

if (choice==1)

    {
       
       scanf("%d %d",&num1,&num2);
       c=num1&num2;
       printf("The result of Bitwise AND is = %d",c);

    }

else if (choice==2)

    {
      
       scanf("%d %d",&num1,&num2);
       c=num1|num2;
       printf("The result of Bitwise OR is = %d",c);
    }


else  

    {
        
        scanf("%d %d",&num1,&num2);
        c=num1^num2;
        printf("The result of Bitwise XOR is= %d",c);
    }




return 0;
}