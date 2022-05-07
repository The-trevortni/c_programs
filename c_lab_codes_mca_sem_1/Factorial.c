/*#include<stdio.h>
int main()
{
    int number;
    long double factorial=1;
    printf("Enter the number to find its factorial");
    scanf("%d",&number);
    
    if(number==0)

       {          
           printf("The factorial of %d is 1",number);
           
        }
        
    else
        {
            for(int i=number;i>=1;i--)
             
             {
                factorial=factorial*i;   
             }
        
          
        }
    printf("The factorial of %d is= %d",number,factorial);
   return 0; 
}
*/






#include<stdio.h>
int main()
{
    int number;
   double   factorial=1;
   
    printf("Enter the number to find its factorial ");
    scanf("%d",&number);
    if(number<=0)
         {
            int ans=1;
            printf("The factorial of %d is = %d",number,ans);
         }
    else 
    
    {
        for(int i=1;i<=number;i++)
         { 
               factorial=factorial*i;  
               
         }
         
    }
    printf("The factorial of %d is = %lf",number,factorial);
    return 0;
}